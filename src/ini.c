/*
** EPITECH PROJECT, 2022
** ini.c
** File description:
** Read script1 and script2 and save ship's postions for each players.
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void ini_player(player_t *pl)
{
    pl->pl_grid = NULL;
    pl->enemy_pos = NULL;
    pl->my_boat = 14;
    pl->enemy_boat = 14;
    return;
}

void ini_var(var_t *my_var)
{
    my_var->pos_2x = 0;
    my_var->pos_2y = 0;
    my_var->pos_x = 0;
    my_var->pos_y = 0;
    return;
}

void ini_all(player_t *pl, var_t *my_var)
{
    ini_var(my_var);
    ini_player(pl);
    return;
}
