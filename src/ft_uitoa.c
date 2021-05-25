/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaplant <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:16:12 by llaplant          #+#    #+#             */
/*   Updated: 2021/05/19 09:23:53 by llaplant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	len_str(unsigned int n)
{
	int	i;

	i = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_uitoa(unsigned int n)
{
	char 	*str;
	size_t	i;

	i = len_str(n);
	str = ft_newstr(i);
	if (str)
	{
		if (!n)
			str[0] = '0';
		while (n)
		{
			str[i--] = (n % 10) + '0';
			n = n / 10;
		}
	}
	return (str);
}
