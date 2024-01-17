/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matevos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:50:44 by matevos           #+#    #+#             */
/*   Updated: 2024/01/17 12:02:21 by matevos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	c2;
	size_t			i;
	char			*ptr;

	i = 0;
	ptr = (char *) b;
	c2 = (unsigned char) c;
	while (i < len)
	{
		ptr[i] = c2;
		i++;
	}
	return (b);
}
