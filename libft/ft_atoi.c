#include "libft.h"

int		ft_atoi(const char *str)
{
    int		i;
    int		sign;
    int		nbr;

    i = 0;
    sign = 1;
    nbr = 0;
    if (!str[i])
        return (0);
    while (str[i] < '0' || str[i] > '9')
        i += 1;
    if (str[i - 1] == '-')
        if (str[i] >= '0' && str[i] <= '9')
            sign = -1;
    while (str[i] >= '0' && str[i] <= '9')
        nbr = (nbr * 10) + (str[i++] - '0');
    return (nbr * sign);
}