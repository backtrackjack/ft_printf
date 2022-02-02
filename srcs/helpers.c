/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:38:32 by jsellars          #+#    #+#             */
/*   Updated: 2021/11/21 12:31:01 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	validate(char c, va_list args, int *counter)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int), counter);
	else if (c == 's')
		ft_putstr(va_arg(args, char *), counter);
	else if (c == 'p')
	{
		ft_putstr("0x", counter);
		ft_putmem(va_arg(args, uintptr_t), counter);
	}
	else if (c == 'd' || c == 'i')
		ft_putnum(va_arg(args, int), c, counter);
	else if (c == 'x' || c == 'X' || c == 'u')
		ft_putnum(va_arg(args, unsigned int), c, counter);
	else if (c == '%')
		ft_putchar('%', counter);
}

char	ft_toupper(char c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
