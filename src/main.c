/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
    int check = 0;
    player_t pl;
    var_t my_var;

    check = help(ac, av);
    if (check == 2)
        return (0);
    check = error(ac, av);
    if (check == 84)
        return (84);
    ini_all(&pl, &my_var);
    if (ac == 2)
        check = read_map(av, &pl, &my_var);
    if (ac == 3)
        check = read_map2(av, &pl, &my_var);
    if (check == 84)
        return (84);
    my_engine(ac, av, &pl);
    free_malloc(&pl);
    return 0;
}

int my_getnbr(char *input)
{
    int i = 0;
    int output = 0;
    int negative = 0;

    if (input[0] == '-') {
        i++;
        negative = 1;
    }
    while (input[i] != '\0') {
        output = ((output * 10) + (input[i] - 48));
        i++;
    }
    if (negative == 1)
        output = -output;
    return (output);
}
