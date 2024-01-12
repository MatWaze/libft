/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matevos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:47:56 by matevos           #+#    #+#             */
/*   Updated: 2024/01/12 18:58:52 by matevos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

char	*ft_strnstr(char *str, char *to_find, int n)
{
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < n)
	{
		if (str[i] == to_find[j])
		{
			if (j == 0)
				ptr = &str[i];
			j++;
		}
		else
		{
			ptr = 0;
			j = 0;
		}
		if (j == ft_strlen(to_find))
			break ;
		i++;
	}
	return (ptr);
}
