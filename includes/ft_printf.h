/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaplant <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 10:24:20 by llaplant          #+#    #+#             */
/*   Updated: 2021/05/25 14:28:18 by llaplant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

typedef struct	s_flags
{
	int	char_count;

	int		minus;
	int		zero;
	int		space;
	int 	zero;
	int 	width;
	int		precision;
	char	converter;
}				t_flags;

void			ft_putchar(char c);
void			ft_putstr(char *s);
void			ft_putnbr(long nb);
void			ft_arg_c(int char);
void			ft_arg_s(const char *s);
void			ft_arg_i(int value);
void			*ft_arg_x(unsigned int value);
void			ft_arg_u(int value);
#endif
