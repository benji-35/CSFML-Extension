/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** my_window
*/

#ifndef MY_WINDOW_H_
#define MY_WINDOW_H_

#include "my_window_structures.h"

window_t *create_window(int width, int height, char *title, list *list);
void destroy_window(window_t *window);
void display_window(window_t *window, list **l, char *name);

#endif /* !MY_WINDOW_H_ */
