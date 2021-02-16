/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** set_font
*/

#include <stdlib.h>
#include "my_buttons_structure.h"

void set_button_font(button *btn, sfFont *font)
{
    if (btn == NULL)
        return;
    sfText *text = btn->text;
    sfText_setFont(text, font);
}

void set_button_text(button *btn, char *text)
{
    sfText_setString(btn->text, text);
}

void set_button_interractable(button *btn, int interractable)
{
    if (btn == NULL)
        return;
    btn->interractable = interractable;
    if (interractable) {
        sfSprite_setColor(btn->sprite, *btn->normal_color);
    } else {
        sfSprite_setColor(btn->sprite, *btn->click_color);
    }
}

void set_text_button_size(button *btn, float x, float y)
{
    if (btn == NULL)
        return;
    sfText *text = btn->text;
    sfText_setScale(text, (sfVector2f) {x, y});
}