/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

int can_openread_file(char *path);
char **read_to_map(char *read, int x, int y);
char *read_file(char *path);
void destroy_map(char **map, int x, int y);
int nb_line(char *str);
int nb_char_line(char *str);
char *int_to_char(int nb);
char *add_in_str(char *str1, char *str2);
char *copy_str(char *str);

#endif /* !MY_H_ */
