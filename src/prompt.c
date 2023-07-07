/*
** EPITECH PROJECT, 2023
** prompt.c
** File description:
** to disp prompt and get user input
*/

#include "file.h"

char *prompt(void)
{
    char *input = NULL;
    size_t len = 0;
    size_t error_case = -1;

    write(1, "$> ", 3);
    if ((len = getline(&input, &len, stdin)) == error_case)
        return NULL;
    input[len - 1] = '\0';
    if (strcmp(input, "exit") == 0)
        return NULL;
    return input;
}
