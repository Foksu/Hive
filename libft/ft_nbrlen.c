#include "libft.h"

size_t	ft_nbrlen(int nbr)
{
    int		len;

    len = 0;
    if (nbr == 0)
        return (1);
    if (nbr < len)
        len += 1;
    while (nbr != 0)
    {
        nbr = nbr / 10;
        len++;
    }
    return (len);
}