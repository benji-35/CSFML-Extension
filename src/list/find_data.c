/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** find_data
*/

#include <stdlib.h>
#include "my_list.h"
#include "list_structure.h"

list *find_data(list *l, char *label)
{
    list *curr = l;

    while (curr != NULL) {
        if (str_equality(curr->label, label))
            return (curr->data);
        curr = curr->next;
    }
    return (NULL);
}

list *find_data_extrem(list *l, char *label, flags flag)
{
    list *curr = l;
    while (curr != NULL) {
        if (*curr->flag == flag && str_equality(curr->label, label))
            return (curr->data);
        curr = curr->next;
    }
    return (NULL);
}