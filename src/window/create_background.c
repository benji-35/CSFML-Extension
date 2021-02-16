/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** create_background
*/

#include <stdlib.h>
#include "background_structure.h"

void init_background_pos(background *bg)
{
    sfVector2f *pos = malloc(sizeof(sfVector2f));
    sfSprite_setTextureRect(bg->sprite, *bg->rect);
    pos->x = 0.0f;
    pos->y = 0.0f;
    bg->pos = pos;
}

background *create_background(char *path , int parralax, sfIntRect rect)
{
    background *new_back = malloc(sizeof(background));
    sfIntRect *new_rect = malloc(sizeof(sfIntRect));
    *new_rect = rect;
    new_rect->width = new_rect->width * 2;
    sfTexture *texture = sfTexture_createFromFile(path, new_rect);
    sfSprite *sprite = sfSprite_create();

    sfTexture_setRepeated(texture, parralax);
    sfSprite_setTexture(sprite, texture, 0);
    new_back->parralax = parralax;
    new_back->path = path;
    new_back->rect = new_rect;
    new_back->sprite = sprite;
    new_back->texture = texture;
    new_back->speed = 0;
    init_background_pos(new_back);
    return (new_back);
}