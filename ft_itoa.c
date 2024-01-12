/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matevos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:42:10 by matevos           #+#    #+#             */
/*   Updated: 2024/01/12 19:48:17 by matevos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_size(int num, int count)
{
	while (num >= 1)
	{
		count++;
		num /= 10;
	}
	return (count);
}

char	*get_num(int n, char *str, int count)
{
	str = (char *) malloc(count + 1);
	str[count--] = '\0';
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n >= 1)
	{
		str[count--] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		n2;
	int		count;
	char	*str;

	str = 0;
	count = 0;
	if (n <= 0)
		count++;
	if (n < 0)
		n2 = -n;
	else
		n2 = n;
	count = num_size(n2, count);
	str = get_num(n, str, count);
	return (str);
}
