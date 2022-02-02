/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:38:26 by jsellars          #+#    #+#             */
/*   Updated: 2021/11/28 11:17:41 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *counter)
{
	write(1, &c, 1);
	(*counter)++;
}

void	ft_putstr(char *s, int *counter)
{
	if (!s)
		s = "(null)";
	while (*s)
		ft_putchar(*s++, counter);
}

void	ft_putnum(int n, char type, int *counter)
{
	unsigned int	nb;
	unsigned int	base;
	char			*base_list;

	base_list = "0123456789abcdef";
	base = 10;
	if (type == 'x' || type == 'X')
		base = 16;
	if (n < 0 && (type == 'd' || type == 'i'))
	{
		nb = -n;
		ft_putchar('-', counter);
	}
	else
		nb = n;
	if (nb >= base)
		ft_putnum(nb / base, type, counter);
	if (type == 'X')
		ft_putchar(ft_toupper(base_list[nb % base]), counter);
	else
		ft_putchar(base_list[nb % base], counter);
}

void	ft_putmem(uintptr_t p, int *counter)
{
	char	*base_list;

	base_list = "0123456789abcdef";
	if (p >= 16)
		ft_putmem(p / 16, counter);
	ft_putchar(base_list[p % 16], counter);
}
