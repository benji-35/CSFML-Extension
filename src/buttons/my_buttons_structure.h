/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** my_buttons
*/

#ifndef MY_BUTTONS_STRUCTURE_H_
#define MY_BUTTONS_STRUCTURE_H_

#include <SFML/Graphics.h>
#include "list_structure.h"

typedef struct button_s button;

struct button_s {
    sfVector2f *pos_text;
    sfVector2f *pos_button;
    sfVector2f *size_button;
    sfIntRect *rect;
    sfTexture *texture;
    sfText *text;
    sfSprite *sprite;
    sfColor *normal_color;
    sfColor *over_color;
    sfColor *click_color;
    int is_over;
    int interractable;
    void (*on_over)(button *btn, list *l);
    void (*on_click)(button *btn, list *l);
    void (*on_unover)(button *btn, list *l);
};

#endif /* !MY_BUTTONS_STRUCTURE_H_ */
