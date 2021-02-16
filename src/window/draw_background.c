/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** draw_background
*/

#include <SFML/Graphics.h>
#include "list_structure.h"
#include "background_structure.h"

list *find_data(list *l, char *label);
list *find_data_extrem(list *l, char *label, flags flag);

void move_x_background(background *bg, float time, list *l)
{
    if (bg == NULL)
        return;
    float size = bg->rect->width / 2.0f;
    sfVector2f pos = sfSprite_getPosition(bg->sprite);
    sfVector2f scale = sfSprite_getScale(bg->sprite);
    bg->pos->x = bg->speed * time;
    if (pos.x < size * -1.0f * scale.x) {
        pos.x = 0.0f;
        sfSprite_setPosition(bg->sprite, pos);
    }
}

void draw_background(background *bg, sfRenderWindow *win)
{
    sfSprite_move(bg->sprite, *bg->pos);
    sfRenderWindow_drawSprite(win, bg->sprite, NULL);
}