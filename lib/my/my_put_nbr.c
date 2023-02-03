/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#include "my.h"
#include <unistd.h>

int	my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        my_put_nbr(-nb);
    } else {
        if ((nb / 10) != 0) {
            my_put_nbr(nb / 10);
        }
        my_putchar(nb % 10 + '0');
    }
    return (0);
}
