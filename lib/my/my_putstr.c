/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#include "my.h"

int my_putstr (char const *str)
{
    int characters;
    for (characters = 0; str[characters] != '\0'; characters++){
        my_putchar(str[characters]);
    }
    return (0);
}
