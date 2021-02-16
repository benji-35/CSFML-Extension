/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** free_node
*/

#include <stdlib.h>
#include "my_list.h"
#include "list_structure.h"

void find_to_free(list *last, list *current, list *next, list **begin)
{
    if  (last == NULL) {
        *begin = next;
    } else {
        last->next = next;
    }
    free_data(current->data, *current->flag, *current->freeable);
    free(current->freeable);
    free(current->flag);
    free(current->tag);
    free(current);
}

void free_node(list **l, char *label)
{
    list *last = NULL;
    list *current = *l;
    list *next = (*l)->next;

    while (current != NULL) {
        if (str_equality(current->label, label)) {
            find_to_free(last, current, next, l);
            break;
        }
        last = current;
        current = next;
        if (next != NULL)
            next = next->next;
    }
}

void free_node_extrem(list **l, char *label, flags flag)
{
    list *last = NULL;
    list *current = *l;
    list *next = (*l)->next;

    while (current != NULL) {
        if (str_equality(current->label, label) && *current->flag == flag) {
            find_to_free(last, current, next, l);
            break;
        }
        last = current;
        current = next;
        if (next != NULL)
            next = next->next;
    }
}