/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** my_background
*/

#ifndef MY_BACKGROUND_H_
#define MY_BACKGROUND_H_

#include "background_structure.h"
#include "list_structure.h"

void destroy_background(background *bg);
background *create_background(char *path , int parralax, sfIntRect rect);
void set_background_speed(background *bg, float speed);
void set_parralax_background(background *bg, int parralax);
void resize_background(background *bg, float x, float y);
void draw_background(background *bg, sfRenderWindow *win);
void move_x_background(background *bg, float time, list *l);

#endif /* !MY_BACKGROUND_H_ */
