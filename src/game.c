/*
** EPITECH PROJECT, 2022
** game.c
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void enemy_pos(player_t *pl, int value)
{
    if (value == 1)
        pl->enemy_pos[global_t->line - 1][global_t->col - 1] = 'o';
    if (value == 0) {
        pl->enemy_pos[global_t->line - 1][global_t->col - 1] = 'x';
        pl->enemy_boat--;
    }
    return;
}

int my_position(player_t *pl)
{
    if (pl->pl_grid[global_t->received_line][global_t->received_col] == '.') {
        pl->pl_grid[global_t->received_line][global_t->received_col] = 'o';
        return (1);
    } else {
        pl->pl_grid[global_t->received_line][global_t->received_col] = 'x';
        pl->my_boat--;
        return (0);
    }
    return 0;
}
