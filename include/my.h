/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

#ifndef MY
    #define MY
    #include "../include/struct.h"
    int my_putstr (char const *str);
    void my_putchar(char c);
    int	my_put_nbr(int nb);
    int my_strlen(char const *str);
    char *my_strcpy(char *dest, char const *src);
    int char_to_nbr(char *nbr_array);
    void user_input(void);
    int my_engine(int ac, char **av, player_t *pl);
    int help(int ac, char **av);
    int error(int ac, char **av);
    int read_map(char **av, player_t *pl, var_t *my_var);
    int read_map2(char **av, player_t *pl, var_t *my_var);
    void ini_all(player_t *pl, var_t *my_var);
    int check_sys_function(char **av);
    int check_sys_function2(char **av);
    void create_array(player_t *pl);
    void put_size_for_x(player_t *pl, var_t *my_var, char size);
    void ini_var(var_t *my_var);
    void put_size_for_y(player_t *pl, var_t *my_var, char size);
    void put_boat(player_t *pl, var_t *my_var, char size);
    void free_malloc(player_t *pl);
    int check_buffer_condition(char *buffer, int i);
    void display_pl_grid(player_t *pl);
    int my_position(player_t *pl);
    void display_enemy_grid(player_t *pl);
    void user_id_handler(fct_struct_t *fstruct,int ac, char **av, player_t *pl);
    void player_one(player_t *pl);
    void player_two(player_t *pl);
    void game_end(player_t *pl);
    void hit_or_missed_receiver(player_t *pl);
    void hit_or_missed(player_t *pl);
    void signal_receiver(void);
    void signal_sender(char *input);
    void user_input(void);
    int my_engine(int ac, char **av, player_t *pl);
    int my_getnbr(char *input);
    void enemy_pos(player_t *pl, int value);
#endif
