/*
** EPITECH PROJECT, 2022
** my_strcpy.c
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#include "my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int p;
    int i = 0;
    n--;
    p = my_strlen(src);
    if (n > p) {
        return (0);
    }
    while (i <= n) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
