/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matevos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:34:59 by matevos           #+#    #+#             */
/*   Updated: 2024/01/11 15:39:51 by matevos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen1(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	int		count;
	char	*new_str;

	i = 0;
	j = ft_strlen1(s1) - 1;
	k = 0;
	while (is_set(s1[i], set))
		i++;
	while (is_set(s1[j], set))
		j--;
	count = j - i;
	new_str = (char *) malloc(count + 1);
	while (count >= 0)
	{
		new_str[k++] = s1[i++];
		count--;
	}
	new_str[k] = '\0';
	return (new_str);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s", ft_strtrim("mmmmmmHellommmmm", "m"));
}
*/
