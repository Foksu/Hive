#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
    char			*strsub;
    unsigned int	i;

    i = 0;
    if (!s)
        return (NULL);
    strsub = (char *)malloc(sizeof(char) * len + 1);
    if (!strsub)
        return (NULL);
    while (i < len)
    {
        strsub[i] = s[i + start];
        i += 1;
    }
    strsub[i] = '\0';
    return (strsub);
}