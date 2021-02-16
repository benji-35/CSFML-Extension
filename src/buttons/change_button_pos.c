/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** change_button_pos
*/

#include <stdlib.h>
#include "my_buttons_structure.h"

sfVector2f get_text_pos(button *btn)
{
    if (btn == NULL)
        return ((sfVector2f) {0.0f, 0.0f});
    sfVector2f result;
    result.x = btn->pos_button->x + btn->pos_text->x;
    result.y = btn->pos_button->y + btn->pos_text->y;
    return (result);
}

void system_set_button_text_pos(button *btn, float x, float y)
{
    if (btn == NULL)
        return;
    sfText_setPosition(btn->text, (sfVector2f){x, y});
}

void set_button_pos(button *btn, float x, float y)
{
    if (btn == NULL)
        return;
    btn->pos_button->x = x;
    btn->pos_button->y = y;
    sfSprite_setPosition(btn->sprite, *btn->pos_button);
    sfVector2f text_pos = get_text_pos(btn);
    system_set_button_text_pos(btn, text_pos.x, text_pos.y);
}

void set_text_button_pos(button *btn, float x, float y)
{
    if (btn == NULL)
        return;
    btn->pos_text->x = x;
    btn->pos_text->y = y;
    sfVector2f text_pos = get_text_pos(btn);
    system_set_button_text_pos(btn, text_pos.x, text_pos.y);
}