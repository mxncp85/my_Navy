/*
** EPITECH PROJECT, 2022
** player.c
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <signal.h>
#include <stdio.h>
#include <unistd.h>
void handler(int sig, siginfo_t *info, void *context);

void hit_or_missed_receiver(player_t *pl)
{
    global_t->count_usr1 = 0;
    global_t->count_usr2 = 0;
    usleep(100000);
    my_putchar(global_t->col + 64);
    my_putchar(global_t->line + 48);
    my_putstr(": ");
    if (global_t->count_usr1 == 1) {
        my_putstr("missed\n\n");
        global_t->count_usr1 = 0;
        enemy_pos(pl, 1);
    }
    if (global_t->count_usr2 == 1) {
        my_putstr("hit\n\n");
        global_t->count_usr2 = 0;
        enemy_pos(pl, 0);
    }
}

void hit_or_missed(player_t *pl)
{
    int result;

    my_putchar(global_t->received_col + 65);
    my_putchar(global_t->received_line + 49);
    my_putstr(": ");
    result = my_position(pl);
    if (result == 1) {
        my_putstr("missed\n\n");
        kill(global_t->enemy_pid, SIGUSR1);
    }
    if (result == 0) {
        my_putstr("hit\n\n");
        kill(global_t->enemy_pid, SIGUSR2);
    }
}
