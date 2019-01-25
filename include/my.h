/*
** EPITECH PROJECT, 2018
** Header of libmy.a
** File description:
** Header for libmy.a
*/

void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_getnbr(char const *str);
void my_put_nbr(int nb);
int check_err(int ac);
int check_win(int *board, int pl, int line);
int disp_line(int match, int blank, int max);
int display_board(int *board, int size, int max);
int get_line(int nbline);
int get_match(int nbmatch);
int game_core(char **av, int *board, int max);
int match_core(char **av);
