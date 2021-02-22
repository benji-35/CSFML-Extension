/*
** EPITECH PROJECT, 2021
** CSFML-Extension
** File description:
** button_interract
*/

#include <stdio.h>
#include "my_buttons.h"
#include "my_list.h"

void on_click_quit(button *btn, list *l)
{
    printf("You clicked on the quit button\n");
}

void on_over_button(button *btn, list *l)
{
    printf("You over the quit button\n");
}

void on_unover_button(button *btn, list *l)
{
    printf("You unover the quit button\n");
}