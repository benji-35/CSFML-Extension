/*
** EPITECH PROJECT, 2021
** myprintflib
** File description:
** printf_need
*/

#ifndef PRINTF_NEED_H_
#define PRINTF_NEED_H_

char *empty_str(void);
int getnbr(char *str);
int getnbr_change(char *str, int *index);
void my_putchar_error(char c);
void my_putchar(char c);
void putstr_error(char *str);
void putstr(char *str);
void check_flag(int *index, char *str, va_list *list, int nb);

#endif /* !PRINTF_NEED_H_ */
