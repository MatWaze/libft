/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:58:39 by mamazari          #+#    #+#             */
/*   Updated: 2024/01/22 16:58:44 by mamazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, const char *set)
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

static int	ft_strlen2(const char *str)
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
