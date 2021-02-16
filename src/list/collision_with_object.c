/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** collision_with_object
*/

#include <stdio.h>
#include "physics_structre.h"
#include "my_list.h"
#include "game_object_structure.h"

int good_for_col(sfVector2f pos1, sfVector2f pos2, sfVector2f x, sfVector2f y)
{
    if (pos2.x <= x.x && pos2.x >= pos1.x) {
        if (pos1.y <= y.y && pos1.y >= pos2.y)
            return (1);
        if (pos2.y <= y.x && pos2.y >= pos1.y)
            return (1);
    }
    if (pos1.x <= x.y && pos1.x >= pos2.x) {
        if (pos1.y <= y.y && pos1.y >= pos2.y)
            return (1);
        if (pos2.y <= y.x && pos2.y >= pos1.y)
            return (1);
    }
    return (0);
}

sfBool is_collision_btw_object(game_object *obj1, game_object *obj2)
{
    if (*obj1->collidable == 0 || *obj2->collidable == 0)
        return (sfFalse);
    sfVector2f pos1 = sfSprite_getPosition(obj1->sprite);
    sfVector2f pos2 = sfSprite_getPosition(obj2->sprite);
    sfIntRect rect1 = *obj1->anims->rect;
    sfIntRect rect2 = *obj2->anims->rect;
    float end_x1 = pos1.x + rect1.width * sfSprite_getScale(obj1->sprite).x;
    float end_y1 = pos1.y + rect1.height * sfSprite_getScale(obj1->sprite).y;
    float end_x2 = pos2.x + rect2.width * sfSprite_getScale(obj2->sprite).x;
    float end_y2 = pos2.y + rect2.height * sfSprite_getScale(obj2->sprite).y;
    sfVector2f x = {end_x1, end_x2};
    sfVector2f y = {end_y1, end_y2};
    if (good_for_col(pos1, pos2, x, y))
        return (sfTrue);
    return (sfFalse);
}

void found_col(list *curr, list *found, int col)
{
    game_object *obj = (game_object *)curr->data;
    if (col) {
        *obj->collidable = 0;
        obj->displayable = 0;
    }
    delete_found_list(found);
}

sfBool is_collision_with_object(game_object *obj, list *l, tags tag, int col)
{
    list *found = find_all_tags(l, tag);
    list *curr = found;
    while (curr != NULL) {
        if (is_collision_btw_object(obj, (game_object *)curr->data)) {
            found_col(curr, found, col);
            return (sfTrue);
        }
        curr = curr->next;
    }
    delete_found_list(found);
    return (sfFalse);
}