/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matevos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:50:44 by matevos           #+#    #+#             */
/*   Updated: 2024/01/13 17:01:57 by matevos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	c2;
	size_t			i;
	char			*char_ptr;

	i = 0;
	char_ptr = (char *) b;
	c2 = (unsigned char) c;
	while (i < len)
	{
		char_ptr[i] = c2;
	}
	return (b);
}
