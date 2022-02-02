/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:48:56 by jsellars          #+#    #+#             */
/*   Updated: 2021/11/20 20:10:34 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		counter;

	counter = 0;
	va_start(args, s);
	while (*s)
	{
		if (*s == '%')
			validate(*++s, args, &counter);
		else
			ft_putchar(*s, &counter);
		s++;
	}
	va_end(args);
	return (counter);
}
