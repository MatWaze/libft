#include "ft_libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
        if (!(*lst)) // If the lst doesn't point anywhere, then make it point to new 
        {
                *lst = new;
                return ;
        }
        else // If the lst does point to some node, then make the new node point to where lst is pointing to
        {    // and make lst point to new 
                new->next = *lst;
                *lst = new;
        }
}
/*
void    print_list(t_list *begin_list)
{
        t_list  *temp = begin_list;
        while (temp)
        {
                printf("%i ", *(int *)temp->content);
                temp = temp->next;
        }
}

int     main(void)
{
        t_list *head;
        int num1 = 3, num2 = 4, num3 = 5; // Integer values
        head = NULL;
        t_list *member = ft_lstnew(&num1);
        t_list *member1 = ft_lstnew(&num2);
        t_list *member2 = ft_lstnew(&num3);
        t_list *member3 = ft_lstnew(&num2);
        t_list *member4 = ft_lstnew(&num1);

        ft_lstadd_front(&head, member); // Pass the address of the integer
        ft_lstadd_front(&head, member1); // Pass the address of the integer
        ft_lstadd_front(&head, member2); // Pass the address of the integer
        ft_lstadd_front(&head, member3); // Pass the address of the integer
        ft_lstadd_front(&head, member4); // Pass the address of the integer
        print_list(head);
}
*/