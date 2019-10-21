#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t			i;
    unsigned char	*udest;
    unsigned char	*usrc;

    i = 0;
    udest = (unsigned char *)dest;
    usrc = (unsigned char*)src;
    while (i < n)
    {
        udest[i] = usrc[i];
        if (usrc[i] == (unsigned char)c)
            return (&udest[i + 1]);
        i += 1;
    }
    return (NULL);
}