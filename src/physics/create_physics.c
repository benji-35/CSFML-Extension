/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** create_physics
*/

#include <stdlib.h>
#include "physics_structre.h"

physic *create_physics(void)
{
    physic *new_phy = malloc(sizeof(physic));
    sfClock *clock = sfClock_create();

    new_phy->clock = clock;
    new_phy->fall = 0;
    new_phy->jump = 0;
    new_phy->fall_velocity = 2.3f;
    new_phy->jump_velocity_want = -35.5f;
    new_phy->jump_velocity = -0.5f;
    new_phy->start_jump = (sfVector2f) {0.0f, 0.0f};
}