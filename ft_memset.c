/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:54:10 by mamazari          #+#    #+#             */
/*   Updated: 2024/01/22 16:54:12 by mamazari         ###   ########.fr       */
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
