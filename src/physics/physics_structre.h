/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** physics_structre
*/

#ifndef PHYSICS_STRUCTRE_H_
#define PHYSICS_STRUCTRE_H_

#include <SFML/System.h>

typedef enum direction_e {
    None,
    NORTH,
    SOUTH,
    WEST,
    EAST
} direction;

typedef struct physics_s {
    int jump;
    int fall;
    float jump_velocity;
    float jump_velocity_want;
    float fall_velocity;
    sfClock *clock;
    sfVector2f start_jump;
} physic;

#endif /* !PHYSICS_STRUCTRE_H_ */
