/*
** EPITECH PROJECT, 2023
** file.h
** File description:
** file.h
*/

#ifndef FILE_H
    #define FILE_H

    #include <stdlib.h>
    #include <stddef.h>
    #include <string.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <stdbool.h>

bool is_a_command(char *input);
char *prompt(void);
char **str_split(char *str, char *seps);
void *my_calloc(size_t type, size_t size);
#endif
