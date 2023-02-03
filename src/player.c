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

void user_id_handler(fct_struct_t *fstruct,int ac, char **av, player_t *pl)
{
    if (ac == 2) {
        fstruct->id_user = 1;
        my_putstr("waiting for enemy connection...\n\n");
        player_one(pl);
    }
    if (ac == 3) {
        fstruct->id_user = 2;
        kill(my_getnbr(av[1]), SIGUSR1);
        global_t->enemy_pid = my_getnbr(av[2]);
        player_two(pl);
    }
    return;
}

void user_input(void)
{
    char *line = NULL;
    size_t size;

    my_putstr("attack: ");
    if (getline(&line, &size, stdin) == -1) {
        my_putstr("No input, type: [Col][Line]\n");
    } else {
        signal_sender(line);
    }
    return;
}

void player_one(player_t *pl)
{
    pause();
    kill(global_t->enemy_pid, SIGUSR2);
    while (pl->my_boat != 0 && pl->enemy_boat != 0) {
        display_pl_grid(pl);
        display_enemy_grid(pl);
        user_input();
        hit_or_missed_receiver(pl);
        my_putstr("waiting for enemy's attack...\n");
        signal_receiver();
        usleep(10000);
        hit_or_missed(pl);
    }
    game_end(pl);
}

void player_two(player_t *pl)
{
    pause();
    while (pl->my_boat != 0 && pl->enemy_boat != 0) {
        display_pl_grid(pl);
        display_enemy_grid(pl);
        my_putstr("waiting for enemy's attack...\n");
        signal_receiver();
        usleep(10000);
        hit_or_missed(pl);
        user_input();
        hit_or_missed_receiver(pl);
    }
    game_end(pl);
}
