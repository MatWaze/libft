/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:53:31 by mamazari          #+#    #+#             */
/*   Updated: 2024/01/22 16:53:33 by mamazari         ###   ########.fr       */
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
