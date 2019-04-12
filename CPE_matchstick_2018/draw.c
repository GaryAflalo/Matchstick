/*
** EPITECH PROJECT, 2019
** .
** File description:
** .
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"
#include <stdio.h>
#include <stdlib.h>

void firs_last_line(int ag1)
{
    for (int i = 0; i < ag1 *2 + 1; i++)
        my_putchar('*');
    my_putchar('\n');
}

void firs_last_line_init(int ag1)
{
    for (int i = 0; i < ag1; i++)
        my_putchar('*');
    my_putchar('\n');
}

void draw_map(int *map, int ag1, int line, int ss)
{
    int z = ag1;
    firs_last_line(ag1);
    int nb_space = ag1;
    int nb_space_2 = ag1 - 1;

    for (int i = 0; i < z; i++) {
        my_putchar('*');
        if (i == line-1)
            map[i] = map[i] - ss;
        for (int a = 0; a < nb_space_2; a++)
            my_putchar(' ');

        for (int a = 0; a < map[i]; a++)
            my_putchar('|');
        for (int a = 0; a < nb_space - map[i]; a++)
            my_putchar(' ');
        my_putchar('*');
        my_putchar('\n');
        nb_space_2--;
        nb_space++;
    }
    firs_last_line(ag1);
}

void draw_map_init(int *map, int ag1)
{
    int z = ag1;
    ag1 = (ag1 * 2) + 1;
    int e = ag1-2;

    firs_last_line_init(ag1);
    for (int i = 0; i < z; i++) {
        my_putchar('*');

        for (int a = 0; a < ((e -map[i]) / 2); a++)
            my_putchar(' ');

        for (int a = 0; a < map[i]; a++)
            my_putchar('|');
        for (int a = 0; a < ((e - map[i])/2); a++)
            my_putchar(' ');
        my_putchar('*');
        my_putchar('\n');
    }
    firs_last_line_init(ag1);
}
