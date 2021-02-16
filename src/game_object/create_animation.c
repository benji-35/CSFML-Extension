/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** create_animation
*/

#include <stdlib.h>
#include "game_object_structure.h"
animation *create_animation(sfIntRect rect)
{
    animation *new_anim = malloc(sizeof(animation));
    sfIntRect *new_rect = malloc(sizeof(sfIntRect));
    sfVector3f *current = malloc(sizeof(sfVector3f));
    *current = (sfVector3f){3.0f, 3.0f, 0.0f};
    *new_rect = rect;
    new_anim->rect = new_rect;
    new_anim->idle = 0;
    new_anim->attack = -1;
    new_anim->jump = -1;
    new_anim->run = -1;
    new_anim->walk = -1;
    new_anim->time_anim = 1.0f;
    new_anim->current = current;
    return (new_anim);
}