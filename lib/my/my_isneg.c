/*
** EPITECH PROJECT, 2022
** my_isneg.c
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#include "my.h"

int my_isneg(int n)
{
    char negative = 'N';
    char positive_and_null = 'P';
    if (n >= 0){
        my_putchar(positive_and_null);
    }else {
        my_putchar(negative);
    }
    my_putchar('\n');
    return (0);
}
