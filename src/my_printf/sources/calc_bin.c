/*
** EPITECH PROJECT, 2020
** calc_bin
** File description:
** calc_bin
*/

#include <stdlib.h>

long long int power(long long nb, long long p);

char transform_bin(long long val, long long *nb)
{
    if (val > *nb)
        return ('0');
    *nb -= val;
    return ('1');
}

long long size_bin(long long nb, long long *max)
{
    long long size = 1;
    long long p = 4;
    long long r = 0;
    if (nb == 0) {
        *max = 1;
        return (1);
    }
    while (size <= nb) {
        size = power(2, p);
        p += 4;
        r++;
    }
    r = r*4;
    if (size > 1)
        size = size / 2;
    *max = size;
    return (r);
}

char *getbin(long long nb)
{
    if (nb < 0)
        nb = nb * -1;
    long long max = 0;
    long long to_malloc = size_bin(nb, &max);
    char *bin = malloc(sizeof(char) * (to_malloc + 1));
    for (long long i = 0; i < (to_malloc + 1); i++) {
        bin[i] = transform_bin(max, &nb);
        max = max / 2;
    }
    bin[to_malloc] = '\0';
    return (bin);
}

char *getbin_int(int nb)
{
    long long new_nb = nb;
    return (getbin(new_nb));
}