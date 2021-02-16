/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** destroy_button
*/

#include <stdlib.h>
#include "my_buttons_structure.h"

void destroy_button(button *btn)
{
    if (btn == NULL)
        return;
    free(btn->pos_button);
    free(btn->pos_text);
    free(btn->rect);
    free(btn->size_button);
    free(btn->click_color);
    free(btn->normal_color);
    free(btn->over_color);
    sfSprite_destroy(btn->sprite);
    sfTexture_destroy(btn->texture);
    sfText_destroy(btn->text);
    free(btn);
}