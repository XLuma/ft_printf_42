/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaplant <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 10:27:39 by llaplant          #+#    #+#             */
/*   Updated: 2021/05/19 10:11:07 by llaplant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_arg_i(int n, int j)
{
	size_t	i;

	i = ft_strlen(ft_itoa(n));
	if (j && n >= 0)
		i += ft_putchar(' ');
	ft_putstr(ft_itoa(n));
	return (i);
}

int	ft_arg_x(unsigned int value, int c)
{
	size_t	i;

	i = ft_strlen(ft_xitoa(n, c));
	ft_putstr(ft_xitoa(n, c));
	return (i);
}

int	ft_arg_u(unsigned int n)
{
	size_t	i;

	i = ft_strlen(ft_uitoa(n));
	ft_putstr(ft_uitoa(n));
	return (i);
}
