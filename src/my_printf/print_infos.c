/*
** EPITECH PROJECT, 2020
** print_infos
** File description:
** print_infos
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my_printf.h"

void printf_pointer(char *hex, int nb)
{
    int length_hex = length(hex);
    for (int i = 0; i < nb - (length_hex + 2); i++) {
        my_putchar(' ', 0);
    }
    my_putstr("0x", 0);
    my_putstr(hex, 0);
}

void no_found(char spe, int nb)
{
    if (spe == '%') {
        my_putchar('%', nb);
    } else {
        my_putchar('%', nb - 1);
        my_putchar(spe, 0);
    }
}

void third_info(int current, char spe, va_list *list, int nb)
{
    if (spe == 'o') {
        char *str = getoctal(va_arg(*list, int));
        my_putstr(str, nb);
        free(str);
        return;
    }
    if (spe == 'X') {
        char *str = gethex(va_arg(*list, int), 0, 1);
        my_putstr(str, nb);
        free(str);
        return;
    }
    if (spe == 'u' || spe == 'U') {
        unsigned int i = va_arg(*list, unsigned int);
        put_unsigned_int(i, nb, 0);
        return;
    }
    no_found(spe, nb);
}

void next_infos(int current, char spe, va_list *list, int nb)
{
    if (spe == 'x') {
        char *str = gethex(va_arg(*list, int), 0, 0);
        my_putstr(str, nb);
        free(str);
        return;
    }
    if (spe == 'b') {
        char *bin = getbin_int(va_arg(*list, int));
        bin = shorter_array(bin);
        my_putstr(bin, nb);
        free(bin);
        return;
    }
    if (spe == 'S') {
        char *str  = va_arg(*list, char *);
        my_put_strspe(str, nb);
        return;
    }
    third_info(current, spe, list, nb);
}

void print_infos(int current, char spe, va_list *list, int nb)
{
    if (spe == 's') {
        my_putstr(va_arg(*list, char *), nb);
        return;
    }
    if (spe == 'd' || spe == 'i') {
        my_putint(va_arg(*list, int), nb, 0);
        return;
    }
    if (spe == 'c') {
        my_putchar(va_arg(*list, int), nb);
        return;
    }
    if (spe == 'p') {
        char *str = gethex(va_arg(*list, long long), 0, 0);
        printf_pointer(str, nb);
        free(str);
        return;
    }
    next_infos(current, spe, list, nb);
}