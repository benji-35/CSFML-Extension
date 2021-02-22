/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** create_button
*/

#include <stdlib.h>
#include "my_buttons_structure.h"

sfVector2f get_text_pos(button *btn);

static void null_functions_buttons(button *btn)
{
    btn->on_click = NULL;
    btn->on_over = NULL;
    btn->on_unover = NULL;
}

static void init_button(button *btn)
{
    int *interractable = malloc(sizeof(int));
    sfColor *normal = malloc(sizeof(sfColor));
    sfColor *over = malloc(sizeof(sfColor));
    sfColor *click = malloc(sizeof(sfColor));
    sfVector2f *pos_text = malloc(sizeof(sfVector2f));
    sfText *text = btn->text;
    *normal = sfWhite;
    *over = sfColor_fromRGBA(142, 142, 142, 255);
    *click = sfColor_fromRGBA(94, 94, 94, 255);
    *interractable = 1;
    pos_text->x = 0.0f;
    pos_text->y = 0.0f;
    btn->pos_text = pos_text;
    btn->click_color = click;
    btn->normal_color = normal;
    btn->over_color = over;
    btn->interractable = interractable;
    sfText_setPosition(text, get_text_pos(btn));
    sfText_setString(text, "NEW TEXT");
    null_functions_buttons(btn);
}

button *create_button(float x, float y, char *path_img, sfIntRect rect)
{
    button *new_button = malloc(sizeof(button));
    sfVector2f *pos = malloc(sizeof(sfVector2f));
    sfVector2f *size = malloc(sizeof(sfVector2f));
    sfIntRect *new_rect = malloc(sizeof(sfIntRect));
    sfText *text = sfText_create();
    sfTexture *texutre = sfTexture_createFromFile(path_img, NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTextureRect(sprite, rect);
    sfSprite_setTexture(sprite, texutre, sfFalse);
    int *is_over = malloc(sizeof(int));
    *is_over = 0;
    *new_rect = rect;
    new_button->is_over = is_over;
    new_button->texture = texutre;
    new_button->pos_button = pos;
    new_button->size_button = size;
    new_button->rect = new_rect;
    new_button->sprite = sprite;
    new_button->text = text;
    init_button(new_button);
    return (new_button);
}