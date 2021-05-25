/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_param.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaplant <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:15:29 by llaplant          #+#    #+#             */
/*   Updated: 2021/05/19 17:02:42 by llaplant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	exec_conv(const char *format, va_list *params, size_t *i, size_t *n)
{
	if (format[*i + 1] == 'd' || format[*i + 1] == 'i')
		*n += ft_arg_i(va_arg(*params, int));
	if (format[*i + 1] == 'u')
		*n += ft_arg_u(va_arg(*params, int));
	if (format[*i + 1] == 's')
		*n += ft_arg_s(va_arg(*params, *char));
	if (format[*i + 1] == 'c')
		*n += ft_arg_c(va_arg(*params, int));
	if (format[*i + 1] == 'x' || format[*i + 1] == 'X')
		*n += ft_arg_x(va_arg(*params, int), format[*i +1]);
	if (format[*i + 1] == 'p')
		*n += ft_arg_p(va_arg(*params, long unsigned int));
	if (format[*i + 1] == '%')
		*n += ft_arg_pc();
}

int	param_list(char c)
{
	char	*opt;
	int		i;

	opt = "cspdiuxX%";
	i = 0;
	while (opt[i])
	{
		if (opt[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

void	check_mod(const char *format, size_t *i, int *j)
{
	char	*white;

	white = " -#";
