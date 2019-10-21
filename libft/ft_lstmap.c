#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list	*head;
    t_list	*iter;

    if (!lst || !(iter = ft_lstnew(NULL, 0)))
        return (NULL);
    iter = f(lst);
    head = iter;
    while (lst->next)
    {
        lst = lst->next;
        iter->next = f(lst);
        iter = iter->next;
    }
    return (head);
}