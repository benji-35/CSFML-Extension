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
    float *time_anim = malloc(sizeof(float));
    int *idle = malloc(sizeof(int));
    int *walk = malloc(sizeof(int));
    int *run = malloc(sizeof(int));
    int *jump = malloc(sizeof(int));
    int *attack = malloc(sizeof(int));
    sfVector3f *current = malloc(sizeof(sfVector3f));
    *current = (sfVector3f){3.0f, 3.0f, 0.0f};
    *time_anim = 1.0f;
    *new_rect = rect;
    new_anim->rect = new_rect;
    new_anim->idle = idle;
    new_anim->attack = attack;
    new_anim->jump = jump;
    new_anim->run = run;
    new_anim->walk = walk;
    new_anim->time_anim = time_anim;
    new_anim->current = current;
    return (new_anim);
}