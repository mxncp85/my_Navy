/*
** EPITECH PROJECT, 2022
** free.c
** File description:
** free malloc;
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void free_malloc(player_t *pl)
{
    int x;

    for (x = 0; x != 9; x++) {
        free (pl->pl_grid[x]);
    }
    free (pl->pl_grid);
    for (x = 0; x != 9; x++) {
        free (pl->enemy_pos[x]);
    }
    free (pl->enemy_pos);
    return;
}
