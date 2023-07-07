/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main
*/

#include "file.h"

int main(void)
{
    char *input = NULL;
    char **command = NULL;
    
    while (1) {
        input = prompt();
        if (input == NULL)
            break;
        command = str_split(input, " ");
        if (is_a_command(command[0]))
            printf("command detected\n");
//            exec(command);
    }
    if (input)
        free(input);
    return 0;
}
