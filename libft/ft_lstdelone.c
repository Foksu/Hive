#include "libft.h"

void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
    t_list	*acnt;

    acnt = *alst;
    del((acnt->content), (acnt->content_size));
    free(*alst);
    *alst = NULL;
}