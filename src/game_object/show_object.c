/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** show_object
*/

#include <SFML/Graphics.h>
#include "my_game_object.h"

void show_object(game_object *obj, sfRenderWindow *win)
{
    if (obj == NULL || obj->sprite == NULL)
        return;
    if (obj->displayable == 0)
        return;
    sfSprite_setTextureRect(obj->sprite, *obj->anims->rect);
    sfSprite_move(obj->sprite, *obj->velocity);
    sfRenderWindow_drawSprite(win, obj->sprite, NULL);
}