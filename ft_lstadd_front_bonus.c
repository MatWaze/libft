/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matevos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:50:04 by matevos           #+#    #+#             */
/*   Updated: 2024/01/11 14:21:51 by matevos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	else
	{
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
