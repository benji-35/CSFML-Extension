/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** destroy_gameobject
*/

#include <stdlib.h>
#include "game_object_structure.h"

void destroy_anim(animation *anim);

void destroy_game_object(game_object *obj)
{
    free(obj->corners);
    free(obj->velocity);
    sfSprite_destroy(obj->sprite);
    sfTexture_destroy(obj->texture);
    destroy_anim(obj->anims);
    free(obj);
}