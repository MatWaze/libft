/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matevos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:48:42 by matevos           #+#    #+#             */
/*   Updated: 2024/01/18 16:51:36 by mamazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;
	unsigned char	c1;

	if (!src && !dest)
		return (0);
	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (d > s)
	{
		while (n-- > 0)
		{
			c1 = (unsigned char)s[n];
			d[n] = c1;
		}
	}
	else
	{
		while (i < n)
		{
			c1 = (unsigned char)s[i];
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
