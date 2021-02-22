/*
** EPITECH PROJECT, 2020
** equality_str
** File description:
** equality_str
*/

int length(char *str);

int equality_str(char *str, char *want)
{
    if (length(str) != length(want))
        return (0);
    for (int i = 0; i < length(str); i++) {
        if (str[i] != want[i])
            return (0);
    }
    return (1);
}