/*
** EPITECH PROJECT, 2020
** sum_numbers
** File description:
** sum_numbers
*/

#include <stdarg.h>

int sum_numbers(int n, ...)
{
    va_list list;
    int result = 0;

    va_start(list, n);
    while (n > 0) {
        result += va_arg(list, int);
        n --;
    }
    va_end(list);
    return (result);
}
