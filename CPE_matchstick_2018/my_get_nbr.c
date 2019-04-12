/*
** EPITECH PROJECT, 2019
** .
** File description:
** .
*/


int my_getnbr(char *str)
{
    int	i;
    int	n;

    i = 0;
    n = 0;
    if (str[0] && str[0] == '-')
        i++;
    while (str[i]) {
        if ((str[i] < '0' || str[i] > '9'))
            return (0);
        n = n + str[i] - 48;
        n = n * 10;
        i++;
    }
    n /= 10;
    if (str[0] == '-')
        return (-1 * n);
    else
        return (n);
}
