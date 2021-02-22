/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** create_window
*/

#include <stdlib.h>
#include "my_window_structures.h"

window_t *create_window(int width, int height, char *title, list *list)
{
    window_t *new_window = malloc(sizeof(window_t));
    sfRenderWindow *win;
    sfEvent *event = malloc(sizeof(sfEvent));
    sfVideoMode *mode = malloc(sizeof(sfVideoMode));
    int *windowed = malloc(sizeof(int));
    *windowed = 1;
    mode->height = height;
    mode->bitsPerPixel = 32;
    mode->width = width;
    win = sfRenderWindow_create(*mode, title, sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(win, 60);
    new_window->evt = event;
    new_window->list = list;
    new_window->video_mode = mode;
    new_window->win = win;
    new_window->windowed = windowed;
    sfRenderWindow_clear(win, sfBlack);
    sfRenderWindow_display(win);
    return (new_window);
}