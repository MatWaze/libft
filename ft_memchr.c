/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:53:05 by mamazari          #+#    #+#             */
/*   Updated: 2024/01/22 16:53:06 by mamazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	char			*str;
	char			c2;

	c2 = (unsigned char) c;
	str = (char *) s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c2)
			return (&str[i]);
		i++;
	}
	return (0);
}
