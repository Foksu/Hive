#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
    int		i;
    int		j;

    i = 0;
    j = 0;
    if (!little[0])
        return ((char *)&big[i]);
    while (big[i])
    {
        while ((big[i + j] == little[j]) && little[j])
            j += 1;
        if (!little[j])
            return ((char *)&big[i]);
        j = 0;
        i += 1;
    }
    return (NULL);
}