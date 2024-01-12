/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matevos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:57:46 by matevos           #+#    #+#             */
/*   Updated: 2024/01/12 19:56:41 by matevos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char const *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	is_whitespace(char c, char delim)
{
	if (c == delim)
		return (1);
	return (0);
}

int	len(char const *str, char delim)
{
	int	i;

	i = 0;
	while (str[i] && !is_whitespace(str[i], delim))
		i++;
	return (i);
}

int	word_count(char const *str, char delim)
{
	int	i;
	int	word;
	int	count;

	i = 0;
	count = 0;
	word = 0;
	while (str[i])
	{
		if (!is_whitespace(str[i], delim) && word == 0)
		{
			word = 1;
			count++;
		}
		else if (is_whitespace(str[i], delim) && word == 1)
			word = 0;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char delim)
{
	char	**arr;
	int		i;
	int		j;
	int		word;

	arr = (char **) malloc((word_count(s, delim) + 1) * sizeof(char *));
	j = 0;
	i = 0;
	word = 0;
	while (s[i])
	{
		if (!is_whitespace(s[i], delim) && word == 0)
		{
			word = 1;
			arr[j] = (char *) malloc(sizeof(char) * (len(&s[i], delim) + 1));
			arr[j] = ft_strncpy(arr[j], &s[i], len(&s[i], delim));
			j++;
		}
		else if (is_whitespace(s[i], delim) && word == 1)
			word = 0;
		i++;
	}
	arr[j] = NULL;
	return (arr);
}
/*
#include <stdio.h>

int	main(void)
{
	char	**tab = ft_split("Hello,world,my,name,is Matevos.", ',');
	int	i = -1;
	while (tab[++i] != NULL)
	{
		printf("%s\n", tab[i]);
	}
}
*/
