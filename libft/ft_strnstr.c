#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t		i;
    size_t		j;

    i = 0;
    j = 0;
    while (big[i] && (i < len))
    {
        while ((big[i + j] == little[j]) && little[j] && ((i + j) < len))
            j += 1;
        if (!little[j])
            return ((char *)&big[i]);
        j = 0;
        i += 1;
    }
    if (!little[0])
        return ((char *)&big[i]);
    return (NULL);
}