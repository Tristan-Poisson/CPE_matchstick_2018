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

int check_err(int ac)
{
    if (ac != 3){
        
        return (84);
    }
}

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
int get_line(int nbline)
{
    char *line = NULL;
    size_t n = 0;
    ssize_t size = 0;
    int ln = 0;

    write(1, "Line: ", 6);
    size = getline(&line, &n, stdin);
    ln = my_getnbr(line);
    return (ln);
}

int get_match(int nbmatch)
{
    char *line = NULL;
    size_t n = 0;
    ssize_t size = 0;
    int mt = 0;

    write(1, "Matches: ", 6);
    size = getline(&line, &n, stdin);
    mt = my_getnbr(line);
    return (mt);
}

int check_win(int *board, int pl, int line)
{
    int i = 0;
    while (i < line){
        if (board[i] != 0)
            return (0);
        i = i + 1;
    }
    return (pl);
}

int game_core(char **av, int *board, int max)
{
    int game = 0;
    int ln;
    int line = my_getnbr(av[1]);
    while (game == 0){
        display_board(board, line, max);
        ln = get_line(line);
        board[ln] = board[ln] - get_match(board[ln]);
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
