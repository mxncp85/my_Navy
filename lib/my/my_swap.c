/*
** EPITECH PROJECT, 2022
** my_swap.c
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

void my_swap(int *a , int *b)
{
    int swapnb;
    swapnb = *b;
    *b = *a;
    *a = swapnb;
}
