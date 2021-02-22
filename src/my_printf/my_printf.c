/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** my_ptintf
*/

#include <stdlib.h>
#include <stdlib.h>
#include <stdarg.h>
#include "my_printf.h"
#include "infos.h"

void printf_special(char current, char val)
{
    if (val == 'n') {
        my_putchar('\n', 0);
    } else {
        my_putchar(current, 0);
        my_putchar(val, 0);
    }
}

int my_printf(char *s, ...)
{
    va_list list;
    va_start(list, s);
    int index = 0;
    while (s[index] != 0) {
        if (s[index] == '%') {
            int nb = getnbr(s + (index + 1), &index);
            print_infos(index, s[index], &list, nb);
            index ++;
        } else if (s[index] == '\\'){
            printf_special(s[index], s[index + 1]);
            index += 2;
        } else {
            my_putchar(s[index], 0);
            index ++;
        }
    }
    va_end(list);
    return (0);
}