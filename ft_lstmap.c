#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
        t_list  *head;
        t_list  *next;

        next = ft_lstnew(f(lst->content));
        if (!next)
                return (NULL);
        head = next;
        lst = lst->next;
        while (lst)
        {
                next = ft_lstnew(f(lst->content));
                if (!next)
                        ft_lstclear(&next, del);
                ft_lstadd_back(&head, next);
                lst = lst->next;
        }
        
}