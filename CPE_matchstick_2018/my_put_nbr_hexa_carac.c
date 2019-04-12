/*
** EPITECH PROJECT, 2018
** putnbr_hexa_carac
** File description:
** putnbr_hexa_carac
*/
#include "my.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int my_put_nbr_hexa_carac(int nb)
{
    int	res;

    if (nb >= 16) {
        res = nb % 16;
        nb = nb / 16;
        my_put_nbr_hexa_carac(nb);
    }
    else if (nb > 0) {
        res = nb % 16;
        nb = nb / 16;
    }
    if (res > 9)
        my_putchar(res + 55);
    else
        my_putchar(res + 48);
}
