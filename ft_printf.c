/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 05:25:42 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/10/28 12:24:06 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"
//#include "ftprintf.h"

va_list	args;

int	ft_printf(const char *format, ...)
{
	va_start(args, format);
	
	int			count;
	//const char	*specifiers;

	count = 0;
	//specifiers = "cspdixX";
	while (*format++)
	{
		if (*format == '%')
		{
			*format++;
			/*
			if (ft_checkif(specifiers, *format))
				ft_printformat();
			*/
			if (*format == 'c')
				count += ft_printchar(va_arg(args, const char));
			else if (*format == 's')
				count += ft_printstr(va_arg(args, const char *));
			else if (*format == 'p')
				count += ft_printhex('p', va_arg(args, void *));
			else if (*format == 'd' || *format == 'i')
				count += ft_printnbr((long)va_arg(args, int));
			else if (*format == 'x')
				count += ft_printhex('x', va_arg(args, void *));
			else if (*format == 'X')
				count += ft_printhex('X', va_arg(args, void *));
			else if (*format == '%' && *++format != '%')
				count += write(1, '%', 1);
			else
			{
				count += write(1, '%', 1);
				count += ft_printchar(*format);
			}
			//return (count);
		}
		else
			count += ft_printchar(*format);
		//return (count);
	}
	return (count);
}
