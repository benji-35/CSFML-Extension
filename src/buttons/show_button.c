/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** show_button
*/

#include "my_buttons_structure.h"

void draw_button(button *btn, sfRenderWindow *win)
{
    if (btn == NULL)
        return;
    sfRenderWindow_drawSprite(win, btn->sprite, NULL);
    sfRenderWindow_drawText(win, btn->text, NULL);
}