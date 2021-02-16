/*
** EPITECH PROJECT, 2021
** myprintflib
** File description:
** display_text
*/

#include <stdarg.h>
void my_putchar(char c);
void putstr(char *str);

void display_char(va_list *data, int nb)
{
    char c = va_arg(*data, int);
    if (nb <= 1) {
        my_putchar(c);
        return;
    }
    for (int i = 0; i < nb - 1; i++)
        my_putchar(' ');
    my_putchar(c);
}

void display_str(va_list *data, int nb)
{
    char *str = va_arg(*data, char *);
    putstr(str);
}

void display_str_b(va_list *data, int nb)
{
    char *str = va_arg(*data, char *);
}