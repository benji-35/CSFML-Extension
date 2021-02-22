/*
** EPITECH PROJECT, 2020
** simple_maths
** File description:
** simple_maths
*/

long long int power(long long nb, long long p)
{
    long long r = nb;
    for (long long i = 0; i < p - 1; i++) {
        r = r * nb;
    }
    return (r);
}