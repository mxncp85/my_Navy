/*
** EPITECH PROJECT, 2022
** my_revstr.c
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#include "my.h"

char *my_revstr(char *str)
{
    char character = 0;
    int h;
    int j;
    int a;

    h = my_strlen(str);
    for (a = 0, j = h - 1; a < (h / 2) + 1; a++, j--) {
        character = str[a];
        str[a] = str[j];
        str[j] = character;
    }
    return (str);
}
