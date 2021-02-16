/*
** EPITECH PROJECT, 2021
** myprintflib
** File description:
** splitstr_from_end
*/

#include <stdlib.h>
int lenght(char *str);
char *mall_str_from_size(int size);

static int nb_nuber_split_end(char *str, int nb)
{
    int res = 0;
    int curr = nb;
    int size = lenght(str);
    for (int i = size - 1; i >= 0; i--) {
        curr--;
        if (curr == 0) {
            curr = nb;
            res++;
        }
    }
    res++;
    return (res);
}

static void complete_str_end(char **splitted, char *str, int nb, int nb_spl)
{
    int val_index = 0;
    for (int i = 0; i < nb_spl; i++) {
        splitted[i] = malloc(sizeof(char) * (nb + 1));
        for (int a = 0; a < nb; a++) {
            val_index = i * nb + a;
            splitted[i][a] = str[val_index];
        }
        splitted[i][nb] = 0;
    }
}

char **split_str_from_end_number(char *str, int nb)
{
    if (str == NULL)
        return (NULL);
    int nb_split = nb_nuber_split_end(str, nb);
    char **splitted = malloc(sizeof(char *) * (nb_split));
    complete_str_end(splitted, str, nb, nb_split - 1);
    splitted[nb_split - 1] = malloc(sizeof(char));
    splitted[nb_split - 1] = NULL;
    return (splitted);
}