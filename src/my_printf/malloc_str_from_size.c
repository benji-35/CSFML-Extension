/*
** EPITECH PROJECT, 2021
** myprintflib
** File description:
** malloc_str_from_size
*/

#include <stdlib.h>

char *mall_str_from_size(int size)
{
    char *res = malloc(sizeof(char) * size + 1);
    return (res);
}