/*
** EPITECH PROJECT, 2021
** CSFML-Extension
** File description:
** my_window_drawing
*/

#include <SFML/Graphics.h>
#include "my.h"
#include "my_audio.h"
#include "my_background.h"
#include "my_buttons.h"
#include "my_game_object.h"
#include "my_list.h"
#include "my_printf.h"
#include "my_window.h"

static void second_check_event(sfEvent event, list **list)
{
    if (event.type == sfEvtResized) {
        sfVector2i *curr_sw = (sfVector2i *) find_data(*list, "curr sw");
        curr_sw->x = event.size.width;
        curr_sw->y = event.size.height;
        return;
    }
}

void event_window(sfEvent event, list **list)
{
    if (event.type == sfEvtClosed) {
        window_t *win = (window_t *)find_data_extrem(*list, "window", WINDOW);
        sfRenderWindow_close(win->win);
        return;
    }
    if (event.type == sfEvtMouseMoved) {
        button *btn = (button *)find_data_extrem(*list, "quit btn", BUTTON);
        sfVector2f pos_mouse = {event.mouseMove.x, event.mouseMove.y};
        over_button(btn, &pos_mouse, *list);
    }
    if (event.type == sfEvtMouseButtonPressed) {
        button *btn = (button *)find_data_extrem(*list, "quit btn", BUTTON);
        sfVector2f pos_mouse = {event.mouseMove.x, event.mouseMove.y};
        click_button(btn, &pos_mouse, *list);
    }
    second_check_event(event, list);
}

void draw_window(list **l, char *name)
{
    window_t *win = (window_t *)find_data_extrem(*l, name, WINDOW);
    while (sfRenderWindow_pollEvent(win->win, win->evt))
            (win->event_listener) (*win->evt, l);
    if (win->clock_listener != NULL)
        (win->clock_listener) (*l);
    (win->draw_stuff)(*l, name);
    if (sfRenderWindow_isOpen(win->win) == sfFalse)
        return;
    (win->play_window)(l, name);
}

void draw_stuff(list *l, char *win_name)
{
    window_t *win = (window_t *)find_data_extrem(l, win_name, WINDOW);
    button *btn = (button *) find_data_extrem(l, "quit btn", BUTTON);
    if (win->win == NULL || btn == NULL)
        return;
    sfRenderWindow_clear(win->win, sfBlack);
    draw_button(btn, win->win);
    sfRenderWindow_display(win->win);
}