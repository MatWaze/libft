/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matevos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:47:08 by matevos           #+#    #+#             */
/*   Updated: 2024/01/22 14:13:13 by mamazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	c;
	char			*s;
	char			*d;
	size_t			i;

	if (!src && !dest)
		return (0);
	s = (char *) src;
	d = (char *) dest;
	i = 0;
	while (i < n)
	{
		c = (unsigned char)s[i];
		d[i] = c;
		i++;
	}
	return (dest);
}
