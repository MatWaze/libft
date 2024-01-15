/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matevos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:47:56 by matevos           #+#    #+#             */
/*   Updated: 2024/01/13 18:17:42 by matevos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen1(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t		i;
	size_t		j;
	char		*ptr;

	if (ft_strlen1(to_find) == 0)
		return ((char *)str);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		ptr = (char *)(&str[i]);
		while (str[i + j] == to_find[j] && str[i + j] && i + j < len)
		{
			if (to_find[j + 1] == '\0')
				return (ptr);
			++j;
		}
		++i;
	}
	return (0);
}
