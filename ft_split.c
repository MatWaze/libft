/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:55:27 by mamazari          #+#    #+#             */
/*   Updated: 2024/01/22 16:55:30 by mamazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*strdup1(const char *src, int len)
{
	int		i;
	char	*dup;

	i = 0;
	dup = (char *) malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	while (src[i] && i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

static int	is_whitespace(char c, char delim)
{
	if (c == delim)
		return (1);
	return (0);
}

static int	len(char const *str, char delim)
{
	int	i;

	i = 0;
	while (str[i] && !is_whitespace(str[i], delim))
		i++;
	return (i);
}

static int	word_count(char const *str, char delim)
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
	if (!arr)
		return (0);
	j = 0;
	i = 0;
	word = 0;
	while (s[i])
	{
		if (!is_whitespace(s[i], delim) && word == 0)
		{
			word = 1;
			arr[j] = strdup1(&s[i], len(&s[i], delim));
			j++;
		}
		else if (is_whitespace(s[i++], delim) && word == 1)
			word = 0;
	}
	arr[j] = NULL;
	return (arr);
}
