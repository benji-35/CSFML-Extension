/*
** EPITECH PROJECT, 2021
** B-MUL-100-REN-1-1-myrunner-benjamin.delvert
** File description:
** add_in_str
*/

#include <stdlib.h>

int lenght_str(char *str)
{
    int r = 0;

    if (str == NULL)
        return (0);
    while (str[r] != 0)
        r++;
    return (r);
}

char *add_in_str(char *str1, char *str2)
{
    int tot = lenght_str(str1) + lenght_str(str2);
    char *r = malloc(sizeof(char) * (tot + 1));
    for (int i = 0; i < lenght_str(str1); i++)
        r[i] = str1[i];
    for (int i = lenght_str(str1); i < tot; i++)
        r[i] = str2[i - lenght_str(str1)];
    r[tot] = 0;
    return (r);
}