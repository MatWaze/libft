/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matevos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:34:59 by matevos           #+#    #+#             */
/*   Updated: 2024/01/18 14:48:39 by mamazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

int	is_set(char c, const char *set)
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

int	ft_strlen2(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		j;
	int		k;
	char	*new_str;

	i = 0;
	j = ft_strlen2(s1) - 1;
	k = 0;
	while (is_set(s1[i], set) == 1 && i <= j)
	{
		i++;
	}
	while (is_set(s1[j], set) == 1 && j >= i)
	{
		j--;
	}
	new_str = (char *) malloc(sizeof(char) * (j - i + 2));
	if (!new_str)
		return (0);
	while (i <= j)
	{
		new_str[k++] = s1[i++];
	}
	new_str[k] = '\0';
	return (new_str);
}
/*
int	main(void)
{
	printf("%s\n", ft_strtrim("tripouille   xxx", " x"));
	//printf("%s\n", ft_strtrim("abcdba", "acb"));
	//printf("string: %s\n", ft_strtrim("   xxx   xxx  ", "x "));
}
*/
