/*
** EPITECH PROJECT, 2021
** create sfml libraries
** File description:
** bsprintf
*/

#ifndef MY_PRINTF_H_
#define MY_PRINTF_H_

#include <stdarg.h>
int is_int(void *data);
int is_char(void *data);
int is_char_star(void *data);
int is_long_long(void *data);
int is_unsigned_int(void *data);
char *shorter_array(char *array);
char *getbin_int(int nb);
int get_size_int(int nb);
int getnbr(char *array, int *next_index);
void put_unsigned_int(unsigned int nb, int minsize, int first);
int my_printf(char *s, ...);
char *getoctal(long long nb);
void printf_special(char current, char val);
long long int power(long long nb, long long p);
char *getbin(int nb);
char *gethex(long long nb, int manual_size, int upper);
void my_put_strspe(char *str, int min_size);
void my_putdouble(double nb, int minsize, int first);
void my_putint(int nb, int minsize, int first);
void my_putstr(char *str, int minsize);
void my_putchar(char c, int size);
int length(char *str);
int sum_numbers(int n, ...);
int sum_strings_length(int n, ...);
void disp_stdarg(char *s, ...);

#endif /* !MY_PRINTF_H_ */
