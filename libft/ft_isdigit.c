#include "libft.h"

int		ft_isdigit(int c)
{
    if (c >= '0' && '9' >= c)
        return (1);
    return (0);
}