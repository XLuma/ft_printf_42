/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaplant <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 09:24:29 by llaplant          #+#    #+#             */
/*   Updated: 2021/05/19 09:35:23 by llaplant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	len_str(long unsigned int n)
{
	int	i;

	i = 1;
	while (n / 16 != 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

int	hexprint(long unsigned int n, char c)
{
	long unsigned int ret;

	ret = n % 16;
	if (ret <= 9)
		return (ret + '0');
	else
	{
		if (c == 'x')
			return (ret + 87);
		else
			return (ret + 55);
	}
}

char	*ft_xitoa(long unsigned int n, char c)
{
	char	*str;
	size_t	i;

	i = len_str(n);
	str = ft_newstr(i);
	if (str)
	{
		if (!n)
			str[0] = '0';
		while (n)
		{
			str[i--] = hexprint(n, c);
			n = n / 16;
		}
	}
	return (str);
}
