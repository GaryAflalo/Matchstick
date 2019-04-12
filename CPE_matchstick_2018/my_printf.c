/*
** EPITECH PROJECT, 2018
** printfgary
** File description:
** printfgary
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "my.h"
int ft_flagbase(char *str , va_list arg, int i)
{

    if (str[i+1] == 's')
        my_putstr(va_arg(arg, char *));
    if (str[i+1] == 'd')
        my_put_nbr(va_arg(arg, int));
    if (str[i+1] == 'i')
        my_put_nbr(va_arg(arg, int));
    if (str[i+1] == 'c')
        my_putchar(va_arg(arg, int));
    if (str[i+1] == '%')
        my_putchar('%');
}

int ft_flagbase2(char *str , va_list arg, int i)
{
    if (str[i+1] == 'o')
        my_put_nbr_octal(va_arg(arg, int));
    if (str[i+1] == 'b')
        my_put_nbr_binary(va_arg(arg, int));
    if (str[i+1] == 'x')
        my_put_nbr_hexa(va_arg(arg, int));
    if (str[i+1] == 'X')
        my_put_nbr_hexa_carac(va_arg(arg, int));
}

void my_printf(char *str, ...)
{
    va_list at;
    int i;
    va_start(at, str);
    i = 0;

    while (str[i]){
        if (str[i] == '%'){
            ft_flagbase(str, at , i);
            ft_flagbase2(str, at , i);
            i++;
        }
        else
            my_putchar(str[i]);
        i++;
    }
    va_end(at);
}
