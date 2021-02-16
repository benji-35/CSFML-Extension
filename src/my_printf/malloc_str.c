/*
** EPITECH PROJECT, 2021
** myprintflib
** File description:
** malloc_str
*/

#include <stdlib.h>

int lenght(char *str);

char *mall_str(char *str)
{
    int size = lenght(str);
    char *new_s = malloc(sizeof(char) * (size + 1));
    for (int i = 0; i < size; i++)
        new_s[i] = str[i];
    new_s[size] = 0;
    return (new_s);
}