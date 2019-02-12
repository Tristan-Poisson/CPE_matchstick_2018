/*
** EPITECH PROJECT, 2019
** matchstick
** File description:
** get of matchstick
*/

#include "include/my.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int get_line(int nbline)
{
    char *line = NULL;
    size_t n = 0;
    ssize_t size = 0;
    int ln = 0;

    write(1, "Line: ", 6);
    size = getline(&line, &n, stdin);
    if (size == -1)
        return (-1);
    ln = my_getnbr(line);
    return (ln);
}

int get_match(int nbmatch)
{
    char *line = NULL;
    size_t n = 0;
    ssize_t size = 0;
    int mt = 0;

    write(1, "Matches: ", 9);
    size = getline(&line, &n, stdin);
    if (size == -1)
        return (-1);
    mt = my_getnbr(line);
    return (mt);
}
