/*
** EPITECH PROJECT, 2021
** myprintflib
** File description:
** getnbr
*/

int is_number(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int getnbr(char *str)
{
    int res = 0;
    int start = 0;
    if (str[0] == '-')
        start = 1;
    for (int i = start; is_number(str[i]); i++)
        res = (res * 10) + (str[i] - 48);
    if (start)
        res = res * -1;
    return (res);
}

int getnbr_change(char *str, int *index)
{
    int res = 0;
    int start = 0;
    if (str[0] == '-')
        start = 1;
    for (int i = start; is_number(str[i]); i++) {
        res = (res * 10) + (str[i] - 48);
        *index = *index + 1;
    }
    if (start) {
        *index = *index + 1;
        res = res * -1;
    }
    return (res);
}