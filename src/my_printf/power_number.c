/*
** EPITECH PROJECT, 2021
** myprintflib
** File description:
** power_number
*/

long long power_number(int nb, int power)
{
    if (power == 0)
        return (1);
    if (nb == 0)
        return (0);
    long long res = nb;
    for (long long i = 0; i < power - 1; i++)
        res = res * nb;
    return (res);
}