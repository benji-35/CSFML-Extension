/*
** EPITECH PROJECT, 2021
** myprintflib
** File description:
** check_flag
*/

#include <stdlib.h>
#include <stdarg.h>
#include "structure_printf.h"

int strat_with(char *str1, char *str2);
int lenght(char *str);
list_t *init_flags(void);
void free_flags(list_t *l);

void check_flag(int *index, char *str, va_list *list, int nb)
{
    list_t *flags = init_flags();
    list_t *curr = flags;
    while (curr != NULL) {
        if (strat_with(str + *index, curr->flag->flag)) {
            curr->flag->fun(list, nb);
            break;
        }
        curr = curr->next;
    }
    free_flags(flags);
}