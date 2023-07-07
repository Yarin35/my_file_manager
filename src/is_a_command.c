/*
** EPITECH PROJECT, 2023
** is_a_command.c
** File description:
** to check if it's or not a command
*/

#include "file.h"

bool is_a_command(char *input)
{
    if (strcmp(input, "open") == 0)
        return true;
    if (strcmp(input, "cd") == 0)
        return true;
    if (strcmp(input, "ls") == 0)
        return true;
    return false;
}
