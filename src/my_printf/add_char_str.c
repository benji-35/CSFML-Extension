/*
** EPITECH PROJECT, 2021
** myprintflib
** File description:
** add_char_str
*/

#include <stdlib.h>

int lenght(char *str);

void add_char_in_str(char **str, char c)
{
    int size = lenght(*str);
    char *new_str = malloc(sizeof(char) * (size + 2));
    for (int i = 0; i < size; i++)
        new_str[i] = (*str)[i];
    new_str[size] = c;
    new_str[size + 1] = 0;
    free(*str);
    *str = new_str;
}

void add_char_str_before(char **str, char c)
{
    int size = lenght(*str);
    char *new_str = malloc(sizeof(char) * (size + 2));
    for (int i = 0; i < size; i++)
        new_str[i + 1] = (*str)[i];
    new_str[0] = c;
    new_str[size + 1] = 0;
    free(*str);
    *str = new_str;
}