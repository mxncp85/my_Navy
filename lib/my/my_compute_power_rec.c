/*
** EPITECH PROJECT, 2022
** my_compute_power_rec.c
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

int my_compute_power_rec(int nb, int p)
{
    int result;

    result = 1;
    if (p < 0){
        result = 0;
        return (result);
    } else if (p == 0){
        result = 1;
        return (result);
    }
    if (p != 0){
        return (nb * my_compute_power_rec(nb, p - 1));
    }
    return (0);
}
