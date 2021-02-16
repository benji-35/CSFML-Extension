/*
** EPITECH PROJECT, 2021
** myprintflib
** File description:
** init_flags
*/

#include <stdarg.h>
#include <stdlib.h>
#include "structure_printf.h"

char *mall_str(char *str);
void display_longlong(va_list *data, int bef);
void display_long(va_list *data, int bef);
void display_ulonglong(va_list *data, int bef);
void display_ulong(va_list *data, int bef);
void display_int(va_list *data, int bef);
void display_unisgned_int(va_list *data, int bef);
void display_short(va_list *data, int bef);
void display_unsigned_short(va_list *data, int bef);
void display_char(va_list *data, int nb);
void display_str(va_list *data, int nb);
void display_str_b(va_list *data, int nb);
void display_double(va_list *data, int bef);
void display_binary(va_list *data, int nb);
void display_hexa(va_list *data, int nb);
void display_pointer(va_list *data, int nb);

void add_flag(list_t **begin, void (*func)(va_list *, int), char *flag)
{
    list_t *node = malloc(sizeof(list_t));
    flags_t *f = malloc(sizeof(flags_t));
    f->flag = mall_str(flag);
    f->fun = func;
    node->flag = f;
    node->next = *begin;
    *begin = node;
}

list_t *init_flags(void)
{
    list_t *list = NULL;
    add_flag(&list, display_binary, "b");
    add_flag(&list, display_hexa, "x");
    add_flag(&list, display_str_b, "S");
    add_flag(&list, display_str, "s");
    add_flag(&list, display_pointer, "p");
    add_flag(&list, display_char, "c");
    add_flag(&list, display_int, "i");
    add_flag(&list, display_int, "d");
    add_flag(&list, display_double, "f");
    add_flag(&list, display_long, "l");
    add_flag(&list, display_ulong, "lu");
    add_flag(&list, display_longlong, "ll");
    add_flag(&list, display_ulonglong, "llu");
    add_flag(&list, display_longlong, "lld");
    return (list);
}

void free_flags(list_t *list)
{
    if (list == NULL)
        return;
    list_t *next = list->next;
    while (list != NULL) {
        free(list->flag->flag);
        free(list->flag);
        free(list);
        list = next;
        if (next != NULL)
            next = next->next;
    }
}