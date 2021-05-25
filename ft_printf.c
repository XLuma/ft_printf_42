/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaplant <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 08:27:23 by llaplant          #+#    #+#             */
/*   Updated: 2021/05/19 10:15:08 by llaplant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	check_param(const char *format)
{
	size_t	i;
	while (*format)
	{
		if (*format == 'c')
		{
		}
		if (*format == 's')
		{
		}
		if (*format == 'p')
		{
		}
		if (*format == 'd' || *format == 'i')
		{
		}
		if (*format == 'u')
		{
		}
		if (*format == 'x')
		{
		}
		if (*format == 'X')
		{
		}
		if (*format == '%')
		{
		}
		*format++;
	}
	return (0);
}
		
int	ft_printf(const char *format, ...)
{
	va_list params;
	size_t	i;
	size_t	n;

	if (!format)
		return (0);
	va_start(params, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (check_param(format, &params, &i, &n))
				return (n);
		}
		n += ft_arg_c(format[i]);
		i++;
	}
	va_end(params);
	return (n);
}
		


