#include "libft.h"

size_t		ft_wordcount(const char *s, char c)
{
    size_t	i;
    size_t	w;

    i = 0;
    w = 0;
    while (s[i])
    {
        if (s[i] != c)
            w += 1;
        while (s[i] != c && s[i + 1])
            i += 1;
        i += 1;
    }
    return (w);
}