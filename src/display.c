/*
** EPITECH PROJECT, 2022
** display.c
** File description:
** Display the game.
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void display_pl_grid(player_t *pl)
{
    int y = 0;
    int x = 0;
    my_putstr("my positions:\n");
    my_putstr(" |A B C D E F G H\n-+---------------\n");
    while (pl->pl_grid[y][x] != '\0') {
        if (x == 0) {
            my_put_nbr(y + 1);
            my_putchar('|');
        }
        my_putchar(pl->pl_grid[y][x]);
        if (x < 7)
            my_putchar(' ');
        x++;
        if (pl->pl_grid[y][x] == '\n') {
            my_putchar(pl->pl_grid[y][x]);
            x = 0;
            y++;
        }
    } my_putchar('\n');
    return;
}

void display_enemy_grid(player_t *pl)
{
    int y = 0;
    int x = 0;
    my_putstr("enemy's positions:\n");
    my_putstr(" |A B C D E F G H\n-+---------------\n");
    while (pl->enemy_pos[y][x] != '\0') {
        if (x == 0) {
            my_put_nbr(y + 1);
            my_putchar('|');
        }
        my_putchar(pl->enemy_pos[y][x]);
        if (x < 7)
            my_putchar(' ');
        x++;
        if (pl->enemy_pos[y][x] == '\n') {
            my_putchar(pl->enemy_pos[y][x]);
            x = 0;
            y++;
        }
    } my_putchar('\n');
    return;
}
