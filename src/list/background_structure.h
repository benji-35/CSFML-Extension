/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** background_structure
*/

#ifndef BACKGROUND_STRUCTURE_H_
#define BACKGROUND_STRUCTURE_H_

#include <SFML/Graphics.h>

typedef struct background {
    char *path;
    sfIntRect *rect;
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f *pos;
    int *parralax;
    int *speed;
} background;

#endif /* !BACKGROUND_STRUCTURE_H_ */
