/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** destroy_window
*/

#include <stdlib.h>
#include "my_window_structures.h"

void destroy_window(window_t *window)
{
    free(window->evt);
    free(window->video_mode);
    free(window->windowed);
    sfRenderWindow_destroy(window->win);
    free(window);
}