/*
** EPITECH PROJECT, 2021
** create sfml libraries
** File description:
** main
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my.h"
#include "my_audio.h"
#include "my_background.h"
#include "my_buttons.h"
#include "my_game_object.h"
#include "my_list.h"
#include "my_printf.h"
#include "my_window.h"

void on_unover_button(button *btn, list *l);
void on_over_button(button *btn, list *l);
void on_click_quit(button *btn, list *l);
void event_window(sfEvent event, list **list);
void draw_window(list **l, char *name);
void draw_stuff(list *l, char *win_name);

static void init_two(list **l)
{
    sfIntRect rect;
    rect.top = 2100;
    rect.left = 350;
    rect.height = 650;
    rect.width = 2300;
    button *btn_quit = create_button(12, 12, "src/imgs/BurntOrange.png", rect);
    set_size_button(btn_quit, 0.1f, 0.1f);
    set_button_text(btn_quit, "QUIT");
    set_button_font(btn_quit, (sfFont *)find_data(*l, "font"));
    set_text_button_size(btn_quit, 0.65f, 0.65f);
    set_text_button_pos(btn_quit, 70, 18);
    btn_quit->on_click = on_click_quit;
    btn_quit->on_over = on_over_button;
    btn_quit->on_unover = on_unover_button;
    window_t *win = create_window(720, 480, "Coucou", *l);
    win->event_listener = event_window;
    win->play_window = draw_window;
    win->clock_listener = NULL;
    win->draw_stuff = draw_stuff;
    add_node(l, win, "window", WINDOW);
    add_node(l, btn_quit, "quit btn", BUTTON);
}

static void init_one(list **l)
{
    sfVector2i *sw = malloc(sizeof(sfVector2i));
    sfVector2i *current_sw = malloc(sizeof(sfVector2i));
    *sw = (sfVector2i) {720, 480};
    *current_sw = *sw;
    add_node(l, sw, "sw", VECTOR);
    add_node(l, current_sw, "curr sw", VECTOR);
    sfFont *font = sfFont_createFromFile("src/fonts/Fluo Gums.ttf");
    add_node(l, font, "font", FONT);
    init_two(l);
}

int main(void)
{
    list *l = NULL;
    init_one(&l);
    display_window((window_t *)find_data_extrem(l, "window", WINDOW), &l, "window");
    free_list(l);
    return (0);
}