/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** display_all_tag
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include "list_structure.h"
#include "game_object_structure.h"

int str_equality(char *str1, char *str2);

void display_the_gameobject(list *l, sfRenderWindow *win)
{
    game_object *go = (game_object *)l->data;
    if (go->displayable == 0)
        return;
    if (str_equality(l->label, "player")) {
        sfSprite_setTextureRect(go->sprite, *go->anims->rect);
        sfSprite_move(go->sprite, *go->velocity);
        sfRenderWindow_drawSprite(win, go->sprite, NULL);
    } else {
        sfSprite_move(go->sprite, *go->velocity);
        sfRenderWindow_drawSprite(win, go->sprite, NULL);
    }
}

void display_all_gameobject(list *l, sfRenderWindow *win)
{
    list *curr = l;
    while (curr != NULL) {
        if (*curr->flag == GAME_OBJECT && *curr->tag != UNVISIBLE)
            display_the_gameobject(curr, win);
        curr = curr->next;
    }
}