/*
** EPITECH PROJECT, 2018
** my_put_str
** File description:
** display 1 by 1
*/

#include <unistd.h>
#include "../../include/my.h"
void my_putchar(char c);

int my_putstr(char const *str)
{
    int len = my_strlen(str);

    write(1, str, len);
    return (0);
}
