/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** game_object_structure
*/

#ifndef GAME_OBJECT_STRUCTURE_H_
#define GAME_OBJECT_STRUCTURE_H_

#include "list_structure.h"
#include <SFML/Graphics.h>

typedef struct vector4f {
    float x;
    float y;
    float z;
    float w;
} vector4f;

typedef struct animation_s {
    sfIntRect *rect;
    float time_anim;
    int idle;
    int jump;
    int attack;
    int walk;
    int run;
    sfVector3f *current;
} animation;

typedef struct game_object_s {
    char *path;
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f *velocity;
    vector4f *corners;
    animation *anims;
    int gravity;
    int collidable;
    int is_jumping;
    int displayable;
    void (*on_collision)(list *l, struct game_object_s *obj);
} game_object;

#endif /* !GAME_OBJECT_STRUCTURE_H_ */
