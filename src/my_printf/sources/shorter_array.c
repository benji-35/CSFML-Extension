/*
** EPITECH PROJECT, 2020
** shorter_array
** File description:
** shorter_array
*/

#include <stdlib.h>

int length(char *str);

char *shorter_array(char *array)
{
    int current_size = length(array);
    int new_start = 0;

    if (array[new_start] != '0' || current_size == 1)
        return (array);
    while (array[new_start] == '0') {
        new_start ++;
    }
    int to_malloc = current_size - new_start +1;
    char *new_c = malloc(sizeof(char) * to_malloc);
    for (int i = 0; i < (to_malloc - 1); i++) {
        new_c[i] = array[i + new_start];
    }
    new_c[to_malloc - 1] = '\0';
    free(array);
    return (new_c);
}