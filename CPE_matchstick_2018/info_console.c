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

int *init_map(int *map, int ag1)
{
    int e = -1;
    int i = 0;

    while (i != ag1){
        map[i] = e+2;
        e = e+2;
        i++;
    }

    return (map);
}

int nb_line(void)
{
    char *buffer;
    size_t bufsize = 5;
    buffer = malloc(sizeof(char*)*4);
    my_printf("Line: ");
    int nb_line = getline(&buffer, &bufsize, stdin);
    if (nb_line == -1)
        return (-999);
    nb_line = my_get_nbr(buffer);
    return (nb_line);
}

int nb_stick(void)
{
    char *buffer;
    size_t bufsize = 5;

    buffer = malloc(sizeof(char*)*4);
    my_printf("Matches: ");
    int nb_stick = getline(&buffer, &bufsize, stdin);
    if (nb_stick == -1)
        return (-999);
    nb_stick = my_get_nbr(buffer);
    return (nb_stick);
}

int my_get_nbr(char *str)
{
    int i;
    int sign;
    int result;

    sign = 1;
    result = 0;
    i = 0;
    while (str[i] == '-' || str[i] == '+'){
        if (str[i] == '-')
            sign = sign * (-1);
        i = i + 1;
    }
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9'){
        result = result * 10;
        result = str[i] - 48;
        i = i + 1;
    }
    if (sign == -1)
        result = result * (sign);
    return (result);
}
