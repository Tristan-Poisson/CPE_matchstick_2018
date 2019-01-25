/*
** EPITECH PROJECT, 2019
** matchstick
** File description:
** display of matchstick
*/

#include "include/my.h"
#include <stdio.h>
#include <stdio.h>

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
    write(1, "\n", 1);
}