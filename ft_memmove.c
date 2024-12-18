/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:53:54 by mamazari          #+#    #+#             */
/*   Updated: 2024/01/22 16:53:56 by mamazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	move(char *d, char *s, size_t n)
{
	unsigned char	c1;
	size_t			i;

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
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*s;
	char			*d;

	if (!src && !dest)
		return (0);
	s = (char *)src;
	d = (char *)dest;
	move(d, s, n);
	return (dest);
}
