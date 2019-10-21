#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
    t_list	*acnt;
    t_list	*anxt;

    acnt = *alst;
    while (acnt)
    {
        anxt = acnt->next;
        del((acnt->content), (acnt->content_size));
        free(acnt);
        acnt = anxt;
    }
    *alst = NULL;
}