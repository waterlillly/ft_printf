/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 05:25:42 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/10/30 21:10:24 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>

static int	ft_decideformat(va_list args, const char *format, int i)
{
	int	count;

	count = 0;
	if (format[i] == 'c')
		count += ft_printchar(va_arg(args, int));
	else if (format[i] == 's')
		count += ft_printstr(va_arg(args, char *));
	else if (format[i] == 'p')
		count += ft_printptr(va_arg(args, void *));
	else if (format[i] == '%')
		count += ft_printchar(37);
	else if (format[i] == 'd' || format[i] == 'i' || format[i] == 'u') {
		count += ft_printnbr(format[i], va_arg(args, int), 10);
	}
	else if (format[i] == 'x' || format[i] == 'X') {
		count += ft_printnbr(format[i], va_arg(args, unsigned int), 16);
	}
	else
		count += ft_printchar((int)format[i]);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int			count;
	int			i;

	va_start(args, format);
	count = 0;
	i = 0;
	if (!format)
		count += ft_printstr("(nil)");
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_decideformat(args, format, i);
		}
		else
			count += ft_printchar((int)format[i]);
		i++;
	}
	va_end(args);
	return (count);
}

