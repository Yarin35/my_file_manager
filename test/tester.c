/*
** EPITECH PROJECT, 2023
** tester.c
** File description:
** unitests script
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "file.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(is_a_command, check_wrong_command)
{
    cr_assert_not(is_a_command("hello world"));
    cr_assert_not(is_a_command("dgjnejgn"));
    cr_assert_not(is_a_command("jnd gr bghbgu bdg"));
}

Test(is_a_command, check_valid_command)
{
    cr_assert(is_a_command("cd"));
    cr_assert(is_a_command("open"));
    cr_assert(is_a_command("ls"));
}
