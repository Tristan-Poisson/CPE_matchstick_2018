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
    int *gmtn = malloc(sizeof(int) * 2);
    int *lnmt = malloc(sizeof(int) * 2);
    int line = my_getnbr(av[1]);
    for (gmtn[0] = 0; gmtn[0] == 0; gmtn[0] = gmtn[0]){
        display_board(board, line, max);
        my_putstr("Your turn\n");
        for (gmtn[1] = 0; gmtn[1] == 0; gmtn[1] = gmtn[1]){
            lnmt[0] = get_line(line);
            if (lnmt[0] == -1)
                return (0);
            lnmt[1] = get_match(board[lnmt[0] - 1]);
            if (lnmt[1] == -1)
                return (0);
            gmtn[1] = check_match(av, board[lnmt[0] - 1], lnmt[1]);
        }
        disp_play(lnmt);
        board[lnmt[0] - 1] = board[lnmt[0] - 1] - lnmt[1];
        if ((gmtn[0] = check_win(board, 2, line)) != 0)
            break;
        board = ai_turn(av, board, max);
        if ((gmtn[0] = check_win(board, 1, line)) != 0)
            break;
    }
    display_board(board, line, max);
    return (gmtn[0]);
}

int match_core(char **av)
{
    int line = my_getnbr(av[1]);
    int *board = malloc(sizeof(int) * line);
    int i = 0;
    int max;
    int end;
    while (i < line){
        board[i] = 1 + (i * 2);
        max = board[i] + 2;
        i = i + 1;
    }
    end = game_core(av, board, max);
    free(board);
    disp_end(end);
    return (end);
}

int main(int ac, char **av)
{
    int end = 0;
    int check = check_err(ac);
    if (check == 84)
        return (84);
    end = match_core(av);
    return (end);
}
