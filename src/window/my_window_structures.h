/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** my_window
*/

#ifndef MY_WINDOW_STRUCT_H_
#define MY_WINDOW_STRUCT_H_

#include <SFML/Graphics.h>
#include "list_structure.h"

typedef struct window_s {
    sfRenderWindow *win;
    sfVideoMode *video_mode;
    sfEvent *evt;
    list *list;
    int windowed;
    void (*event_listener) (sfEvent event, list **l);
    void (*clock_listener) (list *l);
    void (*play_window) (list **l, char *win_name);
    void (*draw_stuff) (list *l, char *win_name);
} window_t;

#endif /* !MY_WINDOW_STRUCT_H_ */
