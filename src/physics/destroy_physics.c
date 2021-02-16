/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** destroy_physics
*/

#include <stdlib.h>
#include "physics_structre.h"

void destroy_physics(physic *phy)
{
    sfClock_destroy(phy->clock);
    free(phy);
}