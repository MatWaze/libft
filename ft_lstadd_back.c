#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
        t_list  *head;

        if (*lst == NULL)
        {
                *lst = new;
        }
        else
        {
                head = *lst;
                while (head->next != NULL)
                {
                        head = head->next;
                }
                head->next = new;
        }
}