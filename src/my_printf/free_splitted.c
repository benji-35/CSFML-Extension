/*
** EPITECH PROJECT, 2021
** myprintflib
** File description:
** free_splitted
*/

#include <stdlib.h>

void free_splitted(char **splitted)
{
    int u = 0;
    for (int i = 0; splitted[i]; i++) {
        u = i;
        free(splitted[i]);
    }
    free(splitted[u + 1]);
    free(splitted);
}