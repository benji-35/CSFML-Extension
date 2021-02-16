/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** find_all_flags
*/

#include <stdlib.h>
#include "my_list.h"

void create_node_by_find(list *curr, list **found)
{
    list *new_node = malloc(sizeof(list));
    new_node->data = curr->data;
    new_node->flag = curr->flag;
    new_node->freeable = curr->freeable;
    new_node->label = curr->label;
    new_node->tag = curr->tag;
    new_node->next = *found;
    *found = new_node;
}

void delete_found_list(list *l)
{
    if (l == NULL)
        return;
    list *cur = l;
    list *next = l->next;
    while (cur != NULL) {
        free(cur);
        cur = next;
        if (next != NULL)
            next = next->next;
    }
}

list *find_all_flags(list *l, flags flag)
{
    list *found = NULL;
    list *curr = l;
    while (curr != NULL) {
        if (*curr->flag == flag) {
            create_node_by_find(curr, &found);
        }
        curr = curr->next;
    }
    return (found);
}

list *find_all_tags(list *l, tags tag)
{
    list *found = NULL;
    list *curr = l;
    while (curr != NULL) {
        if (*curr->tag == tag) {
            create_node_by_find(curr, &found);
        }
        curr = curr->next;
    }
    return (found);
}