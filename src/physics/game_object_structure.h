/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** game_object_structure
*/

#ifndef GAME_OBJECT_STRUCTURE_H_
#define GAME_OBJECT_STRUCTURE_H_

#include <SFML/Graphics.h>

typedef struct vector4f {
    float x;
    float y;
    float z;
    float w;
} vector4f;

typedef struct line_anim_s {
    int *line;
    int *nb_anim;
} line_anim;

typedef struct animation_s {
    sfIntRect *rect;
    float *time_anim;
    line_anim *idle;
    line_anim *jump;
    line_anim *attack;
    line_anim *walk;
    line_anim *run;
} animation;

typedef struct game_object_s {
    char *path;
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f *velocity;
    vector4f *corners;
    animation *anims;
    int *gravity;
} game_object;

#endif /* !GAME_OBJECT_STRUCTURE_H_ */
