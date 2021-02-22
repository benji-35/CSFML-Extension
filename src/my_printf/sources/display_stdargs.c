/*
** EPITECH PROJECT, 2020
** display_stdargs
** File description:
** display_stdargs
*/

#include <unistd.h>
#include <stdarg.h>

int length(char *str);
int get_size_int(int nb);

double get_size_double(double nb)
{
    double r = 0;
    if (nb = 0)
        return (1);
    while (nb > 0) {
        nb = nb / 10;
        r++;
    }
    return (r);
}

void my_putchar(char c, int size)
{
    char space = ' ';
    for (int i = 0; i < size - 1; i++)
        write(1, &space, 1);
    write(1, &c, 1);
}

void my_putstr(char *str, int minsize)
{
    char space = ' ';
    int size = length(str);
    for (int i = 0; i < minsize - size; i++) {
        my_putchar(space, 0);
    }
    for (int i = 0; i < size; i++) {
        my_putchar(str[i], 0);
    }
}

void my_putint(int nb, int minsize, int first)
{
    if (nb == 0 && first == 0)
        minsize --;
    for (int i = 0; i < minsize - get_size_int(nb); i++) {
        my_putchar(' ', 0);
    }
    int to_put = nb % 10;

    if (nb == 0 && first)
        return;
    if (nb > 0) {
        my_putint(nb/10, 0, 1);
    }
    my_putchar(to_put + 48, 0);
}

void my_putdouble(double nb, int minsize, int first)
{
    int to_put = 0;
    double save = nb;
    for (double i = 0; i < minsize - get_size_double(nb); i++) {
        my_putchar(' ', 0);
    }
    while (save > 10) {
        save = save / 10;
    }
    to_put = save;
    if (nb == 0)
        return;
    if (nb > 0) {
        my_putdouble(nb/10, 0, 1);
    }
    my_putchar(to_put + 48, 0);
}