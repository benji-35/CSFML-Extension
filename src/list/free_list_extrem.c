/*
** EPITECH PROJECT, 2021
** B-MUL-100-REN-1-1-myrunner-benjamin.delvert
** File description:
** free_list_extrem
*/

#include <stdlib.h>
#include "list_structure.h"

void find_to_free(list *last, list *current, list *next, list **begin);

void free_list_tag(list **l, tags tag)
{
    list *last = NULL;
    list *current = *l;
    list *next = (*l)->next;
    while (current != NULL)
    {
        if (*current->tag == tag)
            find_to_free(last, current, next, l);
        last = current;
        current = next;
        next = next->next;
    }
}

void free_list_flag(list **l, flags flag)
{
    list *last = NULL;
    list *current = *l;
    list *next = (*l)->next;
    while (current != NULL)
    {
        if (*current->flag == flag)
            find_to_free(last, current, next, l);
        last = current;
        current = next;
        next = next->next;
    }
}