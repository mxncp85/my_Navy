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

void signal_receiver(void)
{
    global_t->count_usr2 = 0;
    global_t->count_usr1 = 0;
    pause();
    while (global_t->count_usr2 < 1)
        pause();
    global_t->received_col = global_t->count_usr1 - 1;
    global_t->count_usr2 = 0;
    global_t->count_usr1 = 0;
    while (global_t->count_usr2 < 1)
        pause();
    global_t->received_line = global_t->count_usr1 - 1;
    global_t->count_usr2 = 0;
    global_t->count_usr1 = 0;
}

void signal_sender(char *input)
{
    if (my_strlen(input) != 3) {
        my_putstr("wrong position\n");
        user_input();
    }
    global_t->col = (int)input[0] - 64;
    global_t->line = (int)input[1] - 48;
    for (int i = 0; i < global_t->col; i++) {
        kill(global_t->enemy_pid, SIGUSR1);
        usleep(500);
    }
    kill(global_t->enemy_pid, SIGUSR2);
    usleep(500);
    for (int i = 0; i < global_t->line; i++) {
        kill(global_t->enemy_pid, SIGUSR1);
        usleep(500);
    }
    kill(global_t->enemy_pid, SIGUSR2);
    usleep(500);
}
