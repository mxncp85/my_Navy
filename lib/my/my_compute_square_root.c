/*
** EPITECH PROJECT, 2022
** my_compute_square_root.c
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

int my_compute_square_root(int nb)
{
    int square_root = 1;
    int k;
    if (nb == 0 || nb < 0 || nb == 2) {
        return (0);
    }
    if (nb == 1) {
        return (1);
    }
    for (k = 0; k != nb; k = k + 1) {
        square_root = ((nb / square_root) + square_root) / 2;
    }
    if (square_root * square_root == nb) {
        return (square_root);
    } else {
        return (0);
    }
    return (0);
}
