/*
** EPITECH PROJECT, 2018
** putnbr_octal
** File description:
** putnbr_octal
*/
#include "my.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int my_put_nbr_octal(int nb)
{
    void my_putchar(char c)
    {
        write(1, &c , 1);
    }
    if (nb < 0) {
        my_putchar('-');
        my_put_nbr((nb / 8) * -1);
        my_putchar(((nb % 8) * -1) + '0');
    }
    else {
        if (nb >= 10)
            my_put_nbr(nb / 8);
        my_putchar((nb % 8) + '0');
    }
}
