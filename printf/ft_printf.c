/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 05:25:42 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/10/29 15:48:20 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"
#include "libft.h"
#include <stdarg.h>

va_list	args;

int	ft_printf(const char *format, ...)
{
	int			count;
	const char	*specifiers;
	va_start(args, format);

	count = 0;
	specifiers = "csdiupxX%";
	while (*format++)
	{
		if (*format == '%' && ft_checkif(specifiers, *++format))
		{
			if (*format == 'c')
				count += ft_printchar(va_arg(args, int));
			if (*format == 's')
				count += ft_printstr(va_arg(args, char *));
			if (*format == 'd' || *format == 'i')
				count += ft_printnbr('n', va_arg(args, int), 10);
			if (*format == 'u')
				count += ft_printunbr(va_arg(args, unsigned int));
			if (*format == 'p')
				count += ft_printptr(va_arg(args, unsigned long));
			if (*format == 'x')
				count += ft_printnbr('x', va_arg(args, unsigned int), 16);
			if (*format == 'X')
				count += ft_printnbr('X', va_arg(args, unsigned int), 16);
			if (*format == '%' && *++format != '%')
				count += write(1, '%', 1);
			else
				count += ft_printchar(*format);
		}
		else
			count += ft_printchar(*format);
	}
	va_end(args);
	return (count);
}
