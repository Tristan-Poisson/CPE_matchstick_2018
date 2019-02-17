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

int check_line(int ln, int line)
{
    if (ln > 0 && ln <= line)
        return (1);
    else {
        my_putstr("Error: this line is out of range\n");
        return (0);
    }
}

int check_match(char **av, int nbmatch, int match)
{
    int mxmatch = my_getnbr(av[2]);
    if (match == 0) {
        my_putstr("Error: you have to remove at least one match\n");
        return (0);
    }
    if (match > mxmatch) {
        my_putstr("Error: out of range\n");
        return (0);
    }
    if (match > nbmatch) {
        my_putstr("Error: not enough matches on this line\n");
	return (0);
    }
    return (1);
}
