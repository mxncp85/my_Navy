/*
** EPITECH PROJECT, 2022
** my_strcpy.c
** File description:
** No file there, just an epitech header example .
** You can even have multiple lines if you want !
*/

char *my_strcpy(char *dest, char const *src)
{
    int character;
    for (character = 0; src[character] != '\0'; character++) {
        dest[character] = src[character];
    }
    dest[character] = '\0';
    return (dest);
}
