/*
** EPITECH PROJECT, 2022
** engine.c
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

struct global_struct global_st_instance;
struct global_struct *global_t = &global_st_instance;

void handler(int sig, siginfo_t *info, void *context)
{
    global_t->enemy_pid = info->si_pid;
    if (sig == SIGUSR1 && global_t->is_connected == 0) {
            my_putstr("enemy connected\n\n");
            global_t->is_connected = 1;
    }
    if (sig == SIGUSR2 && global_t->is_connected == 0) {
            my_putstr("successfully connected\n\n");
            global_t->is_connected = 1;
    }
    if (sig == SIGUSR1 && global_t->is_connected == 1) {
            global_t->count_usr1++;
    }
    if (sig == SIGUSR2 && global_t->is_connected == 1) {
            global_t->count_usr2++;
    }
    return;
}

void game_end(player_t *pl)
{
    display_pl_grid(pl);
    display_enemy_grid(pl);
    if (pl->my_boat == 0 && pl->enemy_boat == 0) {
        my_putstr("Equality\n");
        return;
    }
    if (pl->my_boat == 0) {
        my_putstr("Enemy won\n");
        return;
    }
    if (pl->enemy_boat == 0) {
        my_putstr("I won\n");
        return;
    }
}

int my_engine(int ac, char **av, player_t *pl)
{
    struct sigaction action;
    fct_struct_t fstruct;

    global_t->count_usr1 = 0;
    global_t->count_usr2 = 0;
    global_t->is_connected = 0;
    action.sa_sigaction = handler;
    action.sa_flags = SA_SIGINFO;
    sigemptyset(&action.sa_mask);
    sigaction(SIGUSR1, &action, NULL);
    sigaction(SIGUSR2, &action, NULL);
    my_putstr("my pid: ");
    my_put_nbr(getpid());
    my_putchar('\n');
    user_id_handler(&fstruct, ac, av, pl);
    return 0;
}
