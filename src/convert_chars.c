/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_chars.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaplant <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 11:40:19 by llaplant          #+#    #+#             */
/*   Updated: 2021/05/19 11:28:03 by llaplant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_arg_c(int c)
{
	ft_putchar(c);
	return (1);
}

void	ft_arg_s(char const *s)
{
	char	*pt;

	if (s)
	{
		pt = (char *)s;
		while (*pt)
			pt += 1;
		write(1, s, (pt - s));
		return (pt - s);
	}
	else
		write(1, "(null)", 6);
	return (6);
}

int	ft_arg_pc(void)
{
	ft_arg_c('%');
}

int	ft_arg_p(long unsigned int n)
{
	size_t	i;

	if (n == 0)
		return (ft_arg_s("0x0"));
	i = 2;
	ft_putstr("0x");
	i += ft_strlen(ft_xitoa(n, 'x'));
	ft_putstr(ft_xitoa(n, 'x'));
	return (i);
}
