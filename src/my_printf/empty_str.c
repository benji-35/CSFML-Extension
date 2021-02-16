/*
** EPITECH PROJECT, 2021
** myprintflib
** File description:
** empty_str
*/

#include <stdlib.h>

char *empty_str(void)
{
    char *str = malloc(sizeof(char) * 1);
    str[0] = 0;
    return (str);
}