/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** display_window
*/

#include "list_structure.h"
#include "my_window.h"

void display_window(window_t *window, list **l, char *name)
{
    (window->play_window)(l, name);
}