/*
** EPITECH PROJECT, 2021
** myprintflib
** File description:
** structure_printf
*/

#ifndef STRUCTURE_PRINTF_H_
#define STRUCTURE_PRINTF_H_

#include <stdarg.h>

typedef struct flags_s {
    void (*fun)(va_list *, int);
    char *flag;
} flags_t;

typedef struct list_s {
    flags_t *flag;
    struct list_s *next;
} list_t;

#endif /* !STRUCTURE_PRINTF_H_ */
