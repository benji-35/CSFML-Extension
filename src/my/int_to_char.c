/*
** EPITECH PROJECT, 2021
** B-MUL-100-REN-1-1-myrunner-benjamin.delvert
** File description:
** int_to_char
*/

#include <stdlib.h>

int size_int(int nb)
{
    int r = 1;

    while (nb > 0) {
        nb = nb / 10;
        r ++;
    }
    return (r);
}

char *int_to_char(int nb)
{
    int size = size_int(nb);
    char *r = malloc(sizeof(char) * size + 1);
    for (int i = 0; i < size; i++) {
        r[size - (i + 1)] = (nb % 10) + 48;
        nb = nb / 10;
    }
    r[size] = 0;
    return (r);
}