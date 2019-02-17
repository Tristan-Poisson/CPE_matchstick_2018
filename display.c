/*
** EPITECH PROJECT, 2019
** matchstick
** File description:
** display of matchstick
*/

#include "include/my.h"
#include <stdio.h>
#include <unistd.h>

int disp_line(int match, int blank, int max)
{
    int c = 0;
    int i;
    for (i = 0; i < blank; i = i + 1){
        write(1, " ", 1);
        c = c + 1;
    }
    for (i = 0; i < match; i = i + 1){
        write(1, "|", 1);
        c = c + 1;
    }
    while (c < max){
        write(1, " ", 1);
        c = c + 1;
    }
}

int display_board(int *board, int size, int max)
{
    int i;
    for (i = 0; i < max; i = i + 1)
        write(1, "*", 1);
    write(1, "\n", 1);
    for (i = 1; i <= size; i = i + 1){
        write(1, "*", 1);
        disp_line(board[i - 1], size - i, max - 2);
        write(1, "*\n", 2);
    }
    for (i = 0; i < max; i = i + 1)
	write(1, "*", 1);
    write(1, "\n\n", 2);
}

int disp_play(int *lnmt)
{
    my_putstr("Player removed ");
    my_put_nbr(lnmt[1]);
    my_putstr(" match(es) from line ");
    my_put_nbr(lnmt[0]);
    my_putstr("\n");
}

int disp_end(int vic)
{
    if (vic == 1)
        my_putstr("I lost... snif... but I'll get you next time!!\n");
    else if (vic == 2)
        my_putstr("You lost, too bad...\n");
}
