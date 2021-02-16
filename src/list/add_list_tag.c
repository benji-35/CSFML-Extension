/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** add_list_tag
*/

#include <stdlib.h>
#include "list_structure.h"
int str_equality(char *str1, char *str2);

void add_list_tag(list *node, tags tag)
{
    if (node == NULL)
        return;
    *node->tag = tag;
}

void add_tag(list *l, char *lbl, tags tag)
{
    list *curr = l;
    while (curr != NULL) {
        if (str_equality(lbl, curr->label)) {
            *curr->tag = tag;
            return;
        }
        curr = curr->next;
    }
}

void add_tag_extrem(list *l, char *lbl, flags flag, tags tag)
{
    list *curr = l;
    while (curr != NULL) {
        if (*curr->flag == flag && str_equality(lbl, curr->label)) {
            *curr->tag = tag;
            return;
        }
        curr = curr->next;
    }
}