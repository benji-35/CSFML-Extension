/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** destroy_map
*/

#include <stdlib.h>

void destroy_map(char **map, int x, int y)
{
    for (int i = 0; i < y + 1; i++) {
        free(map[i]);
    }
    free(map);
}