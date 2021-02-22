/*
** EPITECH PROJECT, 2020
** getnbr
** File description:
** getnbr
*/

void my_putchar(char c, int size);
void my_putint(int nb, int minsize);

unsigned int get_size_unsignedint(unsigned int nb)
{
    if (nb == 0)
        return (1);
    unsigned int result = 0;
    while (nb > 0) {
        result ++;
        nb = nb / 10;
    }
    return (result);
}

int get_size_int(int nb)
{
    int result = 0;
    while (nb > 0) {
        result ++;
        nb = nb / 10;
    }
    return (result);
}

void put_unsigned_int(unsigned int nb, int minsize, int first)
{
    if (nb == 0 && first == 0)
        minsize --;
    for (int i = 0; i < minsize - get_size_int(nb); i++) {
        my_putchar(' ', 0);
    }
    unsigned int to_put = nb % 10;

    if (nb == 0 && first)
        return;
    if (nb > 0) {
        put_unsigned_int(nb/10, 0, 1);
    }
    my_putchar(to_put + 48, 0);
}

int is_digit(char c)
{
    if (c >= 48 && c <= 57)
        return (1);
    return (0);
}

int getnbr(char *array, int *next_index)
{
    int result = 0;
    int i = 0;
    while (is_digit(array[i])) {
        result = result * 10 + (array[i] - 48);
        i++;
    }
    i++;
    *next_index = *next_index + i;
    return (result);
}