/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matevos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:47:08 by matevos           #+#    #+#             */
/*   Updated: 2024/01/18 16:34:14 by mamazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;
	unsigned char	c;
	size_t	i;
	
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
