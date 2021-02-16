/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** read_to_map
*/

#include <stdlib.h>

int nb_line(char *str)
{
    int res = 0;
    for (int i = 0; str[i] != 0; i++) {
        if (str[i] == '\n')
            res++;
    }
    return (res);
}

int nb_char_line(char *str)
{
    int result = 0;
    for (int i = 0; str[i] != 0; i++) {
        if (str[i] == '\n')
            break;
        result++;
    }
    return (result);
}

int index_from_position(int x, int y, int max_x)
{
    int to_return = 0;
    to_return = x + y * (max_x + 1);
    return (to_return);
}

void complete_map(char **map, char *read, int max_x, int max_y)
{
    for (int y = 0; y < max_y; y++) {
        for (int x = 0; x < max_x; x++) {
            map[y][x] = read[index_from_position(x, y, max_x)];
        }
    }
}

char **read_to_map(char *read, int x, int y)
{
    char **map = malloc(sizeof(char *) * (y + 1));
    map[y] = malloc(sizeof(1));
    map[y][0] = 0;
    for (int i = 0; i < y; i++) {
        map[i] = malloc(sizeof(char) * (x + 1));
    }
    complete_map(map, read, x, y);
    return (map);
}