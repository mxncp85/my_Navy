/*
** EPITECH PROJECT, 2022
** my_getnbr.c
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#include "my.h"

int char_to_nbr(char *nbr_array)
{
    int sign = 1;
    int nbr = 0;
    int k = 0;

    if (nbr_array[k] == '-') {
        sign *= -1;
        k++;
    }
    while (nbr_array[k] != '\0') {
        if (nbr_array[k] >= '0' && nbr_array[k] <= '9') {
            nbr *= 10;
            nbr = nbr + nbr_array[k] - '0';
            k++;
        } else {
            nbr *= sign;
            return (nbr);
        }
    }
    nbr *= sign;
    return (nbr);
}
