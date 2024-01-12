/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matevos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:48:42 by matevos           #+#    #+#             */
/*   Updated: 2024/01/12 19:57:34 by matevos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	srce[1000];
	char	*s;
	char	*d;
	size_t	i;

	s = ft_memcpy(srce, src, n);
	d = (char *) dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
	}
	return (dest);
}
