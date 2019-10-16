#include "libft.h"

void    *ft_memalloc(size_t size)
{
    unsigned char	*ptr;

    ptr = NULL;
    if (size)
    {
        ptr = (unsigned char *)malloc(size);
        if (!ptr)
            return (NULL);
        while (size)
            ptr[--size] = 0;
    }
    return ((void *)ptr);
}