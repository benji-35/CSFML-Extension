/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** background_speed
*/

#include "background_structure.h"

void set_background_speed(background *bg, float speed)
{
    bg->speed = speed;
}

void set_parralax_background(background *bg, int parralax)
{
    bg->parralax = parralax;
    sfTexture_setRepeated(bg->texture, parralax);
}

void resize_background(background *bg, float x, float y)
{
    sfSprite_setScale(bg->sprite, (sfVector2f){x, y});
}