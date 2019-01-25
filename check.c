/*
** EPITECH PROJECT, 2019
** matchstick
** File description:
** check of matchstick
*/

#include "include/my.h"
#include <stdio.h>

int check_err(int ac)
{
    if (ac != 3){
        
        return (84);
    }
}

int check_win(int *board, int pl, int line)
{
    int i = 0;
    while (i < line){
        if (board[i] > 0)
            return (0);
        i = i + 1;
    }
    return (pl);
}