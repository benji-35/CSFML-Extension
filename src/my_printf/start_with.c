/*
** EPITECH PROJECT, 2021
** mystrlib
** File description:
** start_with
*/

int lenght(char *str);

int strat_with(char *str1, char *str2)
{
    int s1 = lenght(str1);
    int s2 = lenght(str2);
    if (s2 > s1)
        return (0);
    for (int i = 0; i < s2; i++) {
        if (str1[i] != str2[i])
            return (0);
    }
    return (1);
}