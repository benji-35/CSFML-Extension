/*
** EPITECH PROJECT, 2021
** mystrlib
** File description:
** inverse_str
*/

int lenght(char *str);

void inverse_str(char **str)
{
    char *st = *str;
    int size = lenght(st);
    char tampon = 0;
    for (int i = 0; i < size / 2; i++) {
        tampon = st[i];
        st[i] = st[size - i];
        st[size - i] = tampon;
    }
    *str = st;
}