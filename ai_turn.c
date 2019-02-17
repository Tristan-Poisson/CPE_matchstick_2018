/*
** EPITECH PROJECT, 2019
** ai turn
** File description:
** ai for the matchstick
*/

#include "include/my.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int *ai_turn(char **av, int *board, int max)
{
    int line = my_getnbr(av[1]);
    int i = 0;
    display_board(board, line, max);
    my_putstr("AI's turn...\n");
    while (i < line){
        if (board[i] > 0) {
            board[i] = board[i] - 1;
            break;
        }
        i = i + 1;
    }
    my_putstr("AI removed 1 match(es) from line ");
    my_put_nbr(i + 1);
    my_putstr("\n");
    return (board);
}
