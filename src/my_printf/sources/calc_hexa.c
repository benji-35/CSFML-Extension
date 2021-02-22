/*
** EPITECH PROJECT, 2020
** calc_hexa
** File description:
** calc_hexa
*/

#include <stdlib.h>

char *getbin(long long nb);
int length(char *str);

char calc_hex(char *bin, int upper)
{
    int r = 0;
    int mult = 1;
    for (int i = 3; i >= 0; i--) {
        if (bin[i] == '1')
            r = r + mult;
        mult = mult * 2;
    }
    if (r < 10 && r >= 0)
        return (r + 48);
    if (upper)
        return (r + 55);
    return (r + 87);
}

void calc_reformat(char *array, char *base, int new_size)
{
    int size_base = length(base);
    int index = 0;
    for (int i = new_size - 1; i >= 0; i--) {
        index = i - (new_size - size_base);
        if (index >= size_base || base[index] == 0) {
            array[i] = '0';
        } else {
            array[i] = base[index];
        }
    }
    array[new_size] = '\0';
}

char *reformat_hex(char *result, int manual)
{
    char *newc;
    if (manual > 0) {
        newc = malloc(sizeof(char) * (manual + 1));
        calc_reformat(newc, result, manual);
        return (newc);
    } else {
        return (result);
    }
}

char *gethex(long long nb, int manual_size, int upper)
{
    if (nb < 0) {
        nb = nb * -1;
    }
    char *bin = getbin(nb);
    if (length(bin) == 1)
        return (bin);
    char *save_p = bin;
    int size_malloc = length(bin) / 4;
    char *result = malloc(sizeof(char) * (size_malloc + 1));
    result[size_malloc] = '\0';
    for (int i = 0; i < size_malloc; i++) {
        result[i] = calc_hex(bin, upper);
        bin = bin + 4;
    }
    bin = save_p;
    free(bin);
    result = reformat_hex(result, manual_size);
    return (result);
}