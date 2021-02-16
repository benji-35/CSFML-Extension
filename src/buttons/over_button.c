/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** over_button
*/

#include <stdio.h>
#include "my_list.h"
#include "my_buttons_structure.h"

void change_colors_btn(button *btn, sfColor *color)
{
    sfSprite_setColor(btn->sprite, *color);
    sfText_setColor(btn->text, *color);
}

static void over_on(button *btn, list *l)
{
    (btn->on_over)(btn, l);
    btn->is_over = 1;
    sfSprite_setColor(btn->sprite, *btn->over_color);
}

static void over_off(button *btn, list *l)
{
    btn->is_over = 0;
    sfSprite_setColor(btn->sprite, *btn->normal_color);
    (btn->on_unover)(btn, l);
}

void over_button(button *btn, sfVector2f *pos_mouse, list *l)
{
    if (btn == NULL || btn->interractable == 0)
        return;
    sfVector2i *cur_sw = (sfVector2i *) find_data_extrem(l, "curr sw", VECTOR);
    sfVector2i *sw = (sfVector2i *)find_data_extrem(l, "sw", VECTOR);
    float add_y = ((float) cur_sw->y / (float) sw->y);
    float add_x = ((float) cur_sw->x / (float) sw->x);
    float x_pos = btn->pos_button->x * add_x;
    float y_pos = btn->pos_button->y * add_y;
    float end_x = x_pos + (btn->size_button->x * btn->rect->width) * add_x;
    float end_y = y_pos + (btn->size_button->y * btn->rect->height) * add_y;
    if (pos_mouse->x <= end_x && pos_mouse->x >= x_pos) {
        if (pos_mouse->y <= end_y && pos_mouse->y >= y_pos) {
            over_on(btn, l);
            return;
        }
    }
    over_off(btn, l);
}