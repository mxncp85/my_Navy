/*
** EPITECH PROJECT, 2022
** tools.c
** File description:
** Create array with '.'
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void create_array(player_t *pl)
{
    int i = 0;
    int j = 0;

    while (1) {
        pl->pl_grid[j][i] = '.';
        pl->enemy_pos[j][i] = '.';
        i++;
        if (i == 8) {
            pl->pl_grid[j][i] = '\n';
            pl->enemy_pos[j][i] = '\n';
            i = 0;
            j++;
        }
        if (j == 8)
            break;
    }
    pl->pl_grid[j][i] = '\0';
    pl->enemy_pos[j][i] = '\0';
    return;
}

void put_size_for_x(player_t *pl, var_t *my_var, char size)
{
    while (my_var->pos_x < my_var->pos_2x + 1) {
        pl->pl_grid[my_var->pos_y][my_var->pos_x] = size;
        my_var->pos_x++;
    }
    return;
}

void put_size_for_y(player_t *pl, var_t *my_var, char size)
{
    while (my_var->pos_y < my_var->pos_2y + 1) {
        pl->pl_grid[my_var->pos_y][my_var->pos_x] = size;
        my_var->pos_y++;
    }
    return;
}

void put_boat(player_t *pl, var_t *my_var, char size)
{
    if (my_var->pos_x == my_var->pos_2x)
        put_size_for_y(pl, my_var, size);
    if (my_var->pos_y == my_var->pos_2y)
        put_size_for_x(pl, my_var, size);
    return;
}

int check_buffer_condition(char *buffer, int i)
{
    int j = 0;
    char list[22] = {"12345678ABCDEFGH:\n#\0"};

    for (; list[j] != '\0'; j++) {
        if (buffer[i] == list[j])
            return (0);
        if (list[j] == '#')
            return (1);
    }
    return (0);
}
