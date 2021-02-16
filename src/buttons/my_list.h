/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** my_list
*/

#ifndef MY_LIST_H_
#define MY_LIST_H_

#include <SFML/Graphics.h>
#include "list_structure.h"

int str_equality(char *str1, char *str2);
int lenght(char *str);
list *find_node_extrem(list *l, char *label, flags flag);
list *find_node(list *l, char *label);
void free_data(void *data, flags flag, int freeable);
void add_node(list **begin, void *data, char *lbl, flags flag);
void set_freeable_node(list *l, char *lbl, flags flag, int freeable);
list *find_data(list *l, char *label);
list *find_data_extrem(list *l, char *label, flags flag);
void free_list(list *l);
void add_list_tag(list *node, tags tag);
void delete_found_list(list *l);
list *find_all_tags(list *l, tags tag);
list *find_all_flags(list *l, flags flag);
void add_tag(list *l, char *lbl, tags tag);
void add_tag_extrem(list *l, char *lbl, flags flag, tags tag);
void display_all_gameobject(list *l, sfRenderWindow *win);
void remove_tag_extrem(list *l, char *lbl, flags flag, tags tag);
void remove_tag(list *l, char *lbl, tags tag);
void free_list_tag(list **l, tags tag);
void free_list_flag(list **l, flags flag);

#endif /* !MY_LIST_H_ */
