#include "libft.h"

static int	ft_iswhitespace(int c)
{
    return (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
            || c == '\r');
}

char	*ft_strtrim(char const *s)
{
    size_t	i;
    size_t	j;
    char	*str;

    if (!s)
        return (NULL);
    i = 0;
    j = 0;
    while (s[i] && ft_iswhitespace(s[i]))
        i += 1;
    j = ft_strlen(&s[i]) - 1;
    while (s[i] && ft_iswhitespace(s[j + i]))
        j -= 1;
    if (!(str = ft_strnew(j + 1)))
        return (NULL);
    ft_strncpy(str, (s + i), (j + 1));
    return (str);
}