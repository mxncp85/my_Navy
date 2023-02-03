/*
** EPITECH PROJECT, 2022
** my_strncat.c
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#include "my.h"

char *my_strncat(char *dest ,char const *src, int nb)
{
    int start = 0;
    int end = 0;
    int i = 0;

    start = my_strlen(dest);
    end = my_strlen(src);
    if (nb == 0) {
        return (dest);
    }
    if (nb < 0)
        return (0);
    while (nb > i && i < end) {
        dest[start] = src[i];
        i++;
        start++;
    }
    dest[start] = '\0';
    return (dest);
}
