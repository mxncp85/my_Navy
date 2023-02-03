/*
** EPITECH PROJECT, 2022
** read.c
** File description:
** Read script1 and script2 and save ship's postions for each players.
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

int check_buffer(char *buffer)
{
    int i = 0;

    for (; buffer[i] != '\0'; i++) {
        if (check_buffer_condition(buffer, i) == 1)
            return (84);
    }
    return (0);
}

int malloc_array(player_t *pl)
{
    int x;

    pl->pl_grid = malloc(sizeof(char *) * 9);
    if (pl->pl_grid == NULL)
        return (84);
    for (x = 0; x != 9; x++) {
        pl->pl_grid[x] = malloc(sizeof(char) * 17);
        if (pl->pl_grid[x] == NULL)
            return (84);
    }
    pl->enemy_pos = malloc(sizeof(char *) * 9);
    if (pl->enemy_pos == NULL)
        return (84);
    for (x = 0; x != 9; x++) {
        pl->enemy_pos[x] = malloc(sizeof(char) * 17);
        if (pl->enemy_pos[x] == NULL)
            return (84);
    }
    create_array(pl);
    return (0);
}

int ships_for_player(player_t *pl, char *buffer, var_t *my_var)
{
    int i = 2;
    char size = buffer[0];

    while (buffer[i] != '\0') {
        ini_var(my_var);
        my_var->pos_x = buffer[i] - 65;
        i++;
        my_var->pos_y = buffer[i] - 49;
        pl->pl_grid[my_var->pos_y][my_var->pos_x] = size;
        i += 2;
        my_var->pos_2x = buffer[i] - 65;
        i++;
        my_var->pos_2y = buffer[i] - 49;
        put_boat(pl, my_var, size);
        i += 2;
        size = buffer[i];
        i += 2;
    }
    return (0);
}

int read_map2(char **av, player_t *pl, var_t *my_var)
{
    int file = 0;
    int r_size = 2048;
    char *buffer = {0};

    if (check_sys_function2(av) == 84)
        return (84);
    file = open(av[2], O_RDONLY);
    buffer = malloc(sizeof(char) * r_size);
    if (buffer == NULL)
        return (84);
    if (read(file, buffer, r_size) == -1)
        return (84);
    close (file);
    if (malloc_array(pl) == 84)
        return (84);
    if (check_buffer(buffer) == 84)
        return (84);
    ships_for_player(pl, buffer, my_var);
    free(buffer);
    return (0);
}

int read_map(char **av, player_t *pl, var_t *my_var)
{
    int file = 0;
    int r_size = 2048;
    char *buffer = {0};

    if (check_sys_function(av) == 84)
        return (84);
    file = open(av[1], O_RDONLY);
    buffer = malloc(sizeof(char) * r_size);
    if (buffer == NULL)
        return (84);
    if (read(file, buffer, r_size) == -1)
        return (84);
    close (file);
    if (malloc_array(pl) == 84)
        return (84);
    if (check_buffer(buffer) == 84)
        return (84);
    ships_for_player(pl, buffer, my_var);
    free(buffer);
    return (0);
}
