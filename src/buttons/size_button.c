/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** size_button
*/

#include "my_buttons_structure.h"

void set_size_button(button *btn, float x, float y)
{
    if (btn == NULL)
        return;
    sfVector2f *size = btn->size_button;
    size->x = x;
    size->y = y;
    sfSprite_setScale(btn->sprite, *size);
}