#include "libft.h"

int		ft_isspace(int c)
{
    return (c == '\t' || c == '\v' || c == '\n' || c == '\r' || c == '\f' \
			|| c == ' ');
}