/*
** EPITECH PROJECT, 2021
** myprintflib
** File description:
** divisible
*/

int is_divisible_by(int nb, int div)
{
    float f = (float)nb / (float)div;
    int i = nb / div;
    if ((float)i == f)
        return (1);
    return (0);
}