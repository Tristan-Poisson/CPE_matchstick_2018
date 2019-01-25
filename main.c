/*
** EPITECH PROJECT, 2019
** matchstick
** File description:
** main of matchstick
*/

#include "include/my.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int game_core(char **av, int *board, int max)
{
    int game = 0;
    int ln;
    int line = my_getnbr(av[1]);
    while (game == 0){
        display_board(board, line, max);
        ln = get_line(line);
        board[ln - 1] = board[ln - 1] - get_match(board[ln - 1]);
        game = check_win(board, 1, line);
    }
}

int match_core(char **av)
{
    int line = my_getnbr(av[1]);
    int *board = malloc(sizeof(int) * line);
    int i = 0;
    int max;
    while (i < line){
        board[i] = 1 + (i * 2);
        max = board[i] + 2;
        i = i + 1;
    }
    game_core(av, board, max);
    free(board);
}

int main(int ac, char **av)
{
    int check = check_err(ac);
    if (check == 84)
        return (84);
    match_core(av);
}
