/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 05:25:42 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/10/28 06:19:56 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"
//#include "ftprintf.h"

va_list	args;

int	ft_printf(const char *format, ...)
{
	va_start(args, format);
	int	count;

	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			*format++;
			if (*format == 'c')
				count += ft_printchar(va_arg(args, char));
			else if (*format == 's')
				count += ft_printstr(va_arg(args, char *));
			else if (*format == 'p')
			{
				count += write(1, "0x", 2);
				count += ft_printhex(va_arg(args, char *));
			}
			else if (*format == 'd' || *format == 'i')
				count += ft_printnbr(va_arg(args, int));
			else if (*format == 'x')
				count += ft_tolower(ft_printhex(va_arg(args, char *)));
			else if (*format == 'X')
				count += ft_toupper(ft_printhex(va_arg(args, char *)));
			else if (*format == '%' && *++format != '%')
				count += write(1, "%", 1);
			else
				count += ft_printchar(*format);
			return (count);
		}
		else
			count += ft_printchar(*format);
		return (count);
	}
	
}
