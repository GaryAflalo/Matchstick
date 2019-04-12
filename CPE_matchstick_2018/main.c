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

int game(int *map, int ag1, int ag2)
{

    my_printf("\nYour turn:\n");
    int line = nb_line();
    if (line == -999)
        return (0);

    while (line > ag1 || line <= 0){
        my_printf("Error: this line is out of range\n");
        line = nb_line();
        if (line == -999)
            return (0);
    }
    int ss = nb_stick();
    if (ss == -999)
        return (0);
    while (ss > ag2){
        my_printf("Error: you cannot remove more than %d matches per turn \n", ag2);
        line = nb_line();
        if (line == -999)
            return (0);
        ss = nb_stick();
        if (ss == -999)
            return (0);
    }
    while (ss > map[line-1]){
        my_printf("not enough matches on this line\n");
        line = nb_line();
        if (line == -999)
            return (0);
        ss = nb_stick();
        if (ss == -999)
            return (0);
    }


    my_printf("Player removed %d match(es) from line %d\n", ss, line);
    draw_map(map, ag1, line, ss);
    int i = 0;
    int e = 0;

    while (i < ag1){
        if (map[i] == 0)
            e ++;
        i++;
    }
    if (e == ag1){
        my_printf("You lost, too bad...");
        return (2);}

    if (ia(map, ag1, ag2) == 1)
        return (1);

}

int ia(int *map, int ag1, int ag2)
{
    int a = 0;
    int z = 1;
    int ss = 1;
    while (z > map[a]){
        a++;
    }
    int line = a+1;

    my_printf("\nAI's turn...\n");
    my_printf("AI removed %d match(es) from line %d\n", ss, a+1);
    draw_map(map, ag1, line, ss);

    int i = 0;
    int e = 0;
    while (i++ < ag1){
        if (map[i] == 0)
            e ++;
    }
    if (e == ag1){
        my_printf("I lost... snif... but I'll get you next time!!");
        return (1); }
    game(map, ag1, ag2);

}

int main(int argc , char **argv)
{

    int ag1 = my_getnbr(argv[1]);
    int ag2 = my_getnbr(argv[2]);
    int *map = malloc(sizeof(int*) * ag1);
    int a = 0;
    int i =0;
    int z = 1;
    if (ag1 <= 0 || argc > 3 )
        return (84);
    map = init_map(map, ag1);
    draw_map_init(map, ag1);
    a = game(map, ag1, ag2);
    return (a);
}
