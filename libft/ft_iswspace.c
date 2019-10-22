#include "libft.h"

int		ft_iswspace(int c)
{
	if (c == '\t' || c == ' ' || c == '\n')
		return (1);
	return (0);
}
