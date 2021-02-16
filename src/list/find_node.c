/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** find_node
*/

#include <stdlib.h>
#include "my_list.h"
#include "list_structure.h"

list *find_node(list *l, char *label)
{
    list *curr = l;

    while (curr != NULL) {
        if (str_equality(curr->label, label))
            return (curr);
        curr = curr->next;
    }
    return (NULL);
}

list *find_node_extrem(list *l, char *label, flags flag)
{
    list *curr = l;

    while (curr != NULL) {
        if (str_equality(curr->label, label) && *curr->flag == flag)
            return (curr);
        curr = curr->next;
    }
    return (NULL);
}