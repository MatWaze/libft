/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matevos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:42:10 by matevos           #+#    #+#             */
/*   Updated: 2024/01/22 15:30:41 by mamazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

static unsigned int	num_size(long long num)
{
	unsigned int	size;

	size = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		++size;
		num = num / 10;
	}
	return (size);
}

static void	ft_strrev(char *str, unsigned int index, int i)
{
	char	temp;
	int		first;
	int		last;	

	first = index;
	last = i - 1;
	while (first < last)
	{
		temp = str[first];
		str[first] = str[last];
		str[last] = temp;
		++first;
		--last;
	}
}

static void	get_num(char *str, unsigned int index, long int num)
{
	int	i;

	i = index;
	if (num == 0)
	{
		str[0] = '0';
		++i;
	}
	else
	{
		while (num != 0)
		{
			str[i] = (num % 10) + '0';
			num = num / 10;
			++i;
		}
	}
	str[i] = '\0';
	ft_strrev(str, index, i);
}

char	*ft_itoa(int n)
{
	unsigned int	index;
	unsigned int	count;
	long long		n2;
	char			*str;
	int				minus;

	n2 = n;
	count = num_size(n2);
	index = 0;
	str = 0;
	minus = 1;
	if (n < 0)
	{
		count++;
		index = 1;
		minus = -1;
		n2 = -n2;
	}
	str = (char *) malloc(count + 1);
	if (!str)
		return (0);
	if (minus == -1)
		str[0] = '-';
	get_num(str, index, n2);
	return (str);
}
