#include "libft.h"

int		ft_tolower(int c)
{
    if (c >= 'A' && 'Z' >= c)
        return (c + 32);
    return (c);
}