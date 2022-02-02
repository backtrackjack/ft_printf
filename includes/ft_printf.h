/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsellars <jsellars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 16:39:12 by jsellars          #+#    #+#             */
/*   Updated: 2021/11/28 11:17:40 by jsellars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>

int		ft_printf(const char *s, ...);
char	ft_toupper(char c);
void	validate(char c, va_list args, int *counter);
void	ft_putchar(char n, int *counter);
void	ft_putstr(char *s, int *counter);
void	ft_putnum(int n, char type, int *counter);
void	ft_putmem(uintptr_t p, int *counter);

#endif
