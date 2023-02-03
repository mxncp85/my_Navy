/*
** EPITECH PROJECT, 2022
** my_compute_power_rec.c
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

int my_strlen(char const *str)
{
    int nb_characters = 0;
        while (str[nb_characters] != '\0'){
            nb_characters++;
        }
    return (nb_characters);
}
