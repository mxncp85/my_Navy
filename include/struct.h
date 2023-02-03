/*
** EPITECH PROJECT, 2022
** struct.h
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#ifndef STRUCT
    #define STRUCT

struct global_struct{
    int count_usr1;
    int count_usr2;
    int enemy_pid;
    int is_connected;
    int received_col;
    int received_line;
    int col;
    int line;
};
extern struct global_struct *global_t;

typedef struct fct_struct_t {
    int id_user;
}fct_struct_t;

typedef struct player {
    char **pl_grid;
    char **enemy_pos;
    int my_boat;
    int enemy_boat;
}player_t;

typedef struct map {
    char *buffer;
}map_t;

typedef struct variables {
    int pos_x;
    int pos_y;
    int pos_2x;
    int pos_2y;
}var_t;

#endif
