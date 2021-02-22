/*
** EPITECH PROJECT, 2020
** printf_str
** File description:
** print_str
*/

#include <stdlib.h>
void my_putchar(char c, int minsize);
void my_putint(int nb, int minsize);
void my_putstr(char *c, int minsize);
char *gethex(long long nb, int manual_size);
int length(char *str);

void my_put_strspe(char *str, int min_size)
{
    int index = 0;
    int val_c = 0;
    char *hex;

    for (int i = 0; i < (min_size - length(str)); i++)
        my_putchar(' ', 0);
    while (str[index] != 0) {
        if (str[index] < 32 || str[index] >= 127) {
            my_putchar(92, 0);
            val_c = str[index];
            hex = gethex(val_c, 3);
            my_putstr(hex, 0);
            free(hex);
        } else {
            my_putchar(str[index], 0);
        }
        index++;
    }
}