#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t			i;
    unsigned char	*us1;
    unsigned char	*us2;

    i = 0;
    us1 = (unsigned char *)s1;
    us2 = (unsigned char *)s2;
    while ((i < n) && us1[i] == us2[i])
        i += 1;
    if (i == n)
        return (0);
    else
        return (us1[i] - us2[i]);
}