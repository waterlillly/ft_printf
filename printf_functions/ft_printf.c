/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 05:25:42 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/11/01 21:23:23 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start(args, format);
	count = 0;
	i = 0;
	if (!format || format == NULL)
		count += ft_printstr("(null)");
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

/*
int main(void)
{
	char		*mystrptr = "abcde321";
	int			mydiu = -52;
	const char	*string = "\n Char: %c\n String: %s\n Address: %p\n Decimal: %d\n Integer: %i\n Unsigned: %u\n hex_lower: %x\n HEX_UPPER: %X\n";
	const char	*mystring = "\n myChar: %c\n myString: %s\n myAddress: %p\n myDecimal: %d\n myInteger: %i\n myUnsigned: %u\n myhex_lower: %x\n myHEX_UPPER: %X\n";

	ft_printf(mystring, mystrptr[0], mystrptr, &mystrptr, mydiu, mydiu, mydiu, mydiu, mydiu);
	printf(string, mystrptr[0], mystrptr, &mystrptr, mydiu, mydiu, mydiu, mydiu, mydiu);
	return (0);
}
*/