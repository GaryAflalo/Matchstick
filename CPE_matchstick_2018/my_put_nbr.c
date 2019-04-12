/*
** EPITECH PROJECT, 2018
** putnbr
** File description:
** putnbr
*/
#include "my.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int my_put_nbr(int nb)
{
    int debut;
    int fin;
    
    if (nb < -2147483647 || nb > 2147483647) {
        return (84);
    }
    if (nb < 0) {
        my_putchar('-');
        my_put_nbr(-nb);
    }
    else
    {
        fin = nb % 10;
        debut = nb / 10;
        if (debut != 0)
            my_put_nbr(debut);
        my_putchar(fin + '0');
    }
    return (0);
}
