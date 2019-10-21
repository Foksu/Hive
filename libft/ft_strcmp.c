#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
    unsigned char	*us1;
    unsigned char	*us2;

    us1 = (unsigned char *)s1;
    us2 = (unsigned char *)s2;
    while (*us1 && (*us1 == *us2))
    {
        us1 += 1;
        us2 += 1;
    }
    return (*us1 - *us2);
}