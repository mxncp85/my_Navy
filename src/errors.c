/*
** EPITECH PROJECT, 2022
** errors.c
** File description:
** Check if they are errors.
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int help(int ac, char **av)
{
    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h') {
            my_putstr("USAGE\n     ./navy [first_player_pid] navy_positions");
            my_putstr("\n    for (int i = 0; av[])DESCRIPTION\n");
            my_putstr("     first_player_pid: only for the 2nd player.");
            my_putstr(" pid of the first player.\n");
            my_putstr("     navy_positions: file representing the positions");
            my_putstr("of the ships.\n");
            return (2);
        }
    }
    return (0);
}

int error2(int ac, char **av)
{
    if (ac > 3 || ac < 1) {
        my_putstr("Incorrect usage!\nUse './navy -h'\n");
        return (84);
    }
    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] != 'h') {
            my_putstr("Incorrect usage!\nUse './navy -h'\n");
            return (84);
        }
    }
    return (0);
}

int error(int ac, char **av)
{
    int file = 0;
    int file2 = 0;

    if (ac == 2) {
        if ((file = open(av[1], O_RDONLY)) == -1) {
            close(file);
            return (84);
        }
    }
    if (ac == 3) {
        if ((file2 = open(av[2], O_RDONLY)) == -1) {
            close(file2);
            return (84);
        }
    }
    if (error2(ac, av) == 84)
        return (84);
    return (0);
}

int check_sys_function(char **av)
{
    int file = open(av[1], O_RDONLY);

    if (file == -1)
        return (84);
    close (file);
    return (0);
}

int check_sys_function2(char **av)
{
    int file = open(av[2], O_RDONLY);

    if (file == -1)
        return (84);
    close (file);
    return (0);
}
