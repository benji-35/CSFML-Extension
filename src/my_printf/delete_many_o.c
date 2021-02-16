/*
** EPITECH PROJECT, 2021
** myprintflib
** File description:
** delete_many_o
*/

#include <stdlib.h>
int lenght(char *str);

static int nb_o(char *str, int size)
{
    int res = 0;
    for (int i = 0; i < size; i++) {
        if (str[i] != '0')
            break;
        res++;
    }
    return (res);
}

void delete_o(char **str)
{
    int size = lenght(*str);
    int nb = nb_o(*str, size);
    if (nb == 0)
        return;
    char *new_str = malloc(sizeof(char) * (size - nb));
    for (int i = nb; i < size; i++)
        new_str[i - nb] = (*str)[i];
    free(*str);
    new_str[size - nb - 1] = 0;
    *str = new_str;
}