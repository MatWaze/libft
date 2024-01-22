/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamazari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:54:59 by mamazari          #+#    #+#             */
/*   Updated: 2024/01/22 16:55:00 by mamazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	l;

	l = n;
	if (l < 0)
	{
		ft_putchar_fd('-', fd);
		l = -l;
	}
	if (l < 10)
	{
		ft_putchar_fd(l + 48, fd);
		return ;
	}
	else
	{
		ft_putnbr_fd(l / 10, fd);
	}
	ft_putnbr_fd(l % 10, fd);
}
