/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** add_node
*/

#include <stdlib.h>
#include "my_list.h"
#include "list_structure.h"

void add_node(list **begin, void *data, char *lbl, flags flag)
{
    list *new_node = malloc(sizeof(list));
    tags *tag = malloc(sizeof(tags));
    int *new_freeable = malloc(sizeof(int));
    flags *new_flag = malloc(sizeof(flags));
    *new_flag = flag;
    *tag = NO_TAG;
    *new_freeable = 1;
    new_node->freeable = new_freeable;
    new_node->next = *begin;
    new_node->label = lbl;
    new_node->data = data;
    new_node->tag = tag;
    new_node->flag = new_flag;
    *begin = new_node;
}

void set_freeable_node(list *l, char *lbl, flags flag, int freeable)
{
    list *find = find_node_extrem(l, lbl, flag);
    if (find == NULL)
        return;
    *find->freeable = freeable;
}