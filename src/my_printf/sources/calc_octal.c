/*
** EPITECH PROJECT, 2020
** calc_octal
** File description:
** calc_octal
*/

#include <stdlib.h>

long long int power(long long nb, long long p);

char transform_octal(long long val, long long *nb)
{
    if (val > *nb)
        return ('0');
    *nb -= val;
    return ('1');
}

long long size_octal(long long nb, long long *max)
{
    long long size = 1;
    long long p = 3;
    long long r = 0;
    if (nb == 0) {
        *max = 1;
        return (1);
    }
    while (size <= nb) {
        size = power(2, p);
        p += 3;
        r++;
    }
    r = r*3;
    *max = size / 2;
    return (r);
}

int get_value(char *str, int current)
{
    int r = 0;
    if (str[current - 2] == '1' && (current -2) >= 0) {
        r = r + 4;
    }
    if (str[current - 1] == '1' && (current -1) >= 0) {
        r = r + 2;
    }
    if (str[current] == '1') {
        r = r + 1;
    }
    return (r);
}

char *oct_to_int(char *oct, int size)
{
    int to_mal = size / 3;
    char *result = malloc(sizeof(char) * (to_mal + 1));
    int current = 0;
    int index = 0;
    char c;
    if (size == 1)
        return (oct);
    for (int i = (size - 1); i >= 0; i -= 3) {
        index = to_mal - current - 1;
        c = get_value(oct, i) + 48;
        result[index] = c;
        current ++;
    }
    result[to_mal] = '\0';
    free(oct);
    return (result);
}

char *getoctal(long long nb)
{
    if (nb < 0)
        nb = nb * -1;
    long long max = 0;
    long long to_malloc = size_octal(nb, &max);
    char *oct = malloc(sizeof(char) * (to_malloc + 1));
    for (long long i = 0; i < (to_malloc + 1); i++) {
        oct[i] = transform_octal(max, &nb);
        max = max / 2;
    }
    oct[to_malloc] = '\0';
    oct = oct_to_int(oct, to_malloc);
    return (oct);
}