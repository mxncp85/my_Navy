/*
** EPITECH PROJECT, 2022
** my_compute_power_rec.c
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int start;
    int end = 0;

    start = my_strlen(dest);
    while (src[end] != '\0') {
        dest[start] = src[end];
        end++;
        start++;
    }
    dest[start] = '\0';
    return (dest);
}
