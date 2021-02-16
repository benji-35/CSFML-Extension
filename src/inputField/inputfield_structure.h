/*
** EPITECH PROJECT, 2021
** create sfml libraries
** File description:
** inputfield_structure
*/

#ifndef INPUTFIELD_STRUCTURE_H_
#define INPUTFIELD_STRUCTURE_H_

#include <SFML/Graphics.h>

typedef struct inputfield_s
{
    char *placeHolder;
    char *text;
    int selected;
    int size_text;
    sfVector2f *pos_inputField;
    sfVector2f *pos_text;
    sfVector2f *size;
    sfFont *font;
    sfSprite *sprite;
} inputfield;

#endif /* !INPUTFIELD_STRUCTURE_H_ */
