/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** set_velocity
*/

#include "my_game_object.h"

void set_game_object_velocity(game_object *obj, float x, float y)
{
    obj->velocity->x = x;
    obj->velocity->y = y;
}