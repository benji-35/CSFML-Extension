/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** free_list
*/

#include <stdio.h>
#include <stdlib.h>
#include "list_structure.h"
void free_data(void *data, flags flag, int freeable);

void free_list(list *l)
{
    list *curr = l;
    list *next = curr->next;
    while (curr != NULL) {
        free_data(curr->data, *curr->flag, *curr->freeable);
        free(curr->freeable);
        free(curr->flag);
        free(curr->tag);
        free(curr);
        curr = next;
        if (next != NULL)
            next = next->next;
    }
}