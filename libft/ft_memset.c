#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
    unsigned char *us;

    us = (unsigned char *)s;
    while (n--)
        *us++ = (unsigned char)c;
    return (s);
}