/*
** EPITECH PROJECT, 2021
** myprintflib
** File description:
** my_putstr
*/

#include <unistd.h>

int lenght(char *str)
{
    int res = 0;
    if (str == NULL)
        return (res);
    while (str[res])
        res++;
    return (res);
}

void putstr(char *str)
{
    write(1, str, lenght(str));
}

void putstr_error(char *str)
{
    write(2, str, lenght(str));
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putchar_error(char c)
{
    write(2, &c, 1);
}