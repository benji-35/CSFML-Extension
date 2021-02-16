/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** my_buttons
*/

#ifndef MY_BUTTONS_H_
#define MY_BUTTONS_H_

#include "my_buttons_structure.h"

button *create_button(float x, float y, char *path_img, sfIntRect rect);
void destroy_button(button *btn);
void click_button(button *btn, sfVector2f *pos_mouse, list *l);
void over_button(button *btn, sfVector2f *pos_mouse, list *l);
void draw_button(button *btn, sfRenderWindow *win);
void set_size_button(button *btn, float x, float y);
void set_button_font(button *btn, sfFont *font);
void set_button_pos(button *btn, float x, float y);
void set_text_button_pos(button *btn, float x, float y);
void set_button_text(button *btn, char *text);
void set_button_interractable(button *btn, int interractable);
void set_text_button_size(button *btn, float x, float y);

#endif /* !MY_BUTTONS_H_ */
