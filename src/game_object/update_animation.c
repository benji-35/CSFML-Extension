/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** update_animation
*/

#include <SFML/System.h>
#include "game_object_structure.h"

void update_anim(animation *anim)
{
    int current = (int) anim->current->x;
    int max = (int) anim->current->y;
    current = current + 1;
    if (current >= max)
        current = 0;
    sfIntRect *rect = anim->rect;
    rect->left = rect->width * current;
    rect->top = rect->height * (int) anim->current->z;
    anim->current->x = current;
}

void clock_anim(animation *anim, sfClock *clock_anim_player)
{
    sfTime time = sfClock_getElapsedTime(clock_anim_player);
    int nb_anims = anim->current->y;
    float steps = anim->time_anim / (float)nb_anims;
    float try = 0.0f;
    if (sfTime_asSeconds(time) < steps)
        return;
    time = sfClock_restart(clock_anim_player);
    try += steps;
    update_anim(anim);
    while (try < sfTime_asSeconds(time)) {
        update_anim(anim);
        try += steps;
    }
}