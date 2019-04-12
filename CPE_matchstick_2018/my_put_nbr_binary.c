/*
** EPITECH PROJECT, 2018
** putnbr_binary
** File description:
** putnbr_binary
*/
#include "my.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int my_put_nbr_binary(int nb)
{
    void my_putchar(char c)
    {
        write(1, &c, 1);
    }
    if (nb < 0){
        my_putchar('-');
        my_put_nbr_binary((nb / 2) * -1);
        my_putchar(((nb % 2) * -1) + '0');
    }
    if (nb >= 1) {
        my_put_nbr_binary(nb / 2);
        my_putchar((nb % 2) + '0');
    }
}
