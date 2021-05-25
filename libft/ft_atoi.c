/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaplant <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 13:41:51 by llaplant          #+#    #+#             */
/*   Updated: 2021/05/10 15:31:28 by llaplant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	sum;
	int	nop;

	sum = 0;
	nop = 1;
	while (*str == ' ' || *str == '\t'
		|| *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
	{
		str++;
	}
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			nop = nop * -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		sum = (sum * 10) + *str - '0';
		str++;
	}
	return (sum * nop);
}
