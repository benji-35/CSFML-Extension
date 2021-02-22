/*
** EPITECH PROJECT, 2020
** sum_string_length
** File description:
** sum_strings_length
*/

#include <stdarg.h>

int length(char *str)
{
    int result = 0;

    while (str[result] != 0)
        result ++;
    return (result);
}

int sum_strings_length(int n, ...)
{
    va_list list;
    int result = 0;

    va_start(list, n);
    while (n > 0) {
        result += length(va_arg(list, char *));
        n --;
    }
    va_end(list);
    return (result);
}