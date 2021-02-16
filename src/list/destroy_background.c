/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** destroy_background
*/

#include <stdlib.h>
#include "background_structure.h"

void destroy_background(background *bg)
{
    if (bg == NULL)
        return;
    free(bg->parralax);
    free(bg->rect);
    free(bg->speed);
    sfSprite_destroy(bg->sprite);
    sfTexture_destroy(bg->texture);
    free(bg->pos);
    free(bg);
}