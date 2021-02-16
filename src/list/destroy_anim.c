/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** destroy_anim
*/

#include <stdlib.h>
#include "game_object_structure.h"

void destroy_anim(animation *anim)
{
    if (anim == NULL)
        return;
    free(anim->attack);
    free(anim->idle);
    free(anim->jump);
    free(anim->run);
    free(anim->walk);
    free(anim->rect);
    free(anim->time_anim);
    free(anim->current);
    free(anim);
}