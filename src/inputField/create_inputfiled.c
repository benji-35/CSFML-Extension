/*
** EPITECH PROJECT, 2021
** create sfml libraries
** File description:
** create_inputfiled
*/

#include <stdlib.h>
#include "inputfield_structure.h"
#include "../my/my.h"

inputfield *create_inputfield(sfVector2f pos, sfVector2f size, sfFont *font)
{
    inputfield *new_input = malloc(sizeof(inputfield));
    new_input->selected = 0;
    new_input->size_text = 12;
    new_input->placeHolder = copy_str("Enter text here...");
    new_input->font = font;
    return (new_input);
}