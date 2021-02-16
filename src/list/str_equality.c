/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** str_equality
*/

int lenght(char *str)
{
    int i = 0;
    while (str[i] != 0) {
        i++;
    }
    return (i);
}

int str_equality(char *str1, char *str2)
{
    int lenght_a = lenght(str1);
    if (lenght_a != lenght(str2))
        return (0);
    for (int i = 0; i < lenght_a; i++) {
        if (str1[i] != str2[i])
            return (0);
    }
    return (1);
}