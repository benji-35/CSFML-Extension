/*
** EPITECH PROJECT, 2021
** create sfml libraries
** File description:
** display_inputfield
*/

#include "inputfield_structure.h"
#include <SFML/Graphics.h>

void display_inputfield(sfRenderWindow *win, inputfield *inputfield)
{
    if (inputfield == NULL)
        return;
    sfRenderWindow_drawSprite(win, inputfield->sprite, NULL);
    sfText *txt = inputfield->placeHolder;
    if (inputfield->text != NULL)
        txt = inputfield->text;
    sfRenderWindow_drawText(win, txt, NULL);
}