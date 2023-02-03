/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#ifndef MY
    #define MY

int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_isneg(int n);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr (char const *str);
char *my_revstr(char *str);
char *my_strcat(char *dest, char const *src);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strncat(char *dest ,char const *src, int nb);
char *my_strncpy(char *dest, char const *src, int n);
void my_swap(int *a , int *b);

#endif
