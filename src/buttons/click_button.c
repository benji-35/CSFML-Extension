/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** click_button
*/

#include "list_structure.h"
#include "my_buttons_structure.h"

void change_colors_btn(button *btn, sfColor *color);

void click_button(button *btn, sfVector2f *pos_mouse, list *l)
{
    if (btn == NULL)
        return;
    if (*btn->is_over == 0)
        return;
    sfSprite_setColor(btn->sprite, *btn->click_color);
    (btn->on_click)(btn, l);
    sfSprite_setColor(btn->sprite, *btn->over_color);
}