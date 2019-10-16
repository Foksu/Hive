#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    size_t				i;
    unsigned const char	*us;
    unsigned char		uc;

    i = 0;
    us = (unsigned const char *)s;
    uc = (unsigned char)c;
    while (i < n)
    {
        if (us[i] == uc)
            return ((void *)&us[i]);
        i += 1;
    }
    return (NULL);
}

