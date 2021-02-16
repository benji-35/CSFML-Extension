/*
** EPITECH PROJECT, 2021
** myprintflib
** File description:
** myprintf
*/

#include <stdlib.h>
#include <stdarg.h>
#include "printf_need.h"

int my_printf(char *s, ...)
{
    va_list list;
    va_start(list, s);
    for (int i = 0; s[i]; i++) {
        if (s[i] == '%') {
            int nb = getnbr_change(s + (i + 1), &i);
            i = i + 1;
            check_flag(&i, s, &list, nb);
        } else if (s[i] == '\\'){
            //printf_special(s[i], s[i + 1]);
            i += 2;
        } else {
            my_putchar(s[i]);
        }
    }
    va_end(list);
    return (0);
}