/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 08:35:15 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/10/29 15:44:42 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <unistd.h>
//#include <stdlib.h>
//#include <stdarg.h>
//#include <ctype.h>
//#include <string.h>
#include "ftprintf.h"
#include "libft.h"
/*
int main(void)
{
	char		*mystrptr;
	int			mydiu;
	const char	*string;
	const char	*mystring;

	mystrptr = "abcde321";
	mydiu = 16;
	string = "\n Char: %c\n String: %s\n Address: %p\n Decimal: %d\n Integer: %i\n Unsigned: %u\n hex_lower: %x\n HEX_UPPER: %X\n";
	//mystring = "\n myChar: %c\n myString: %s\n myAddress: %p\n myDecimal: %d\n myInteger: %i\n myUnsigned: %u\n myhex_lower: %x\n myHEX_LOWER: %X\n";
	printf(string, mystrptr[0], mystrptr, &mystrptr, mydiu, mydiu, mydiu, mydiu, mydiu);
	//ft_printf(mystring, mystrptr[0], mystrptr, &mystrptr, mydiu, mydiu, mydiu, mydiu, mydiu);
	return (0);
}

int	ft_printnbr(int nbr)
{
	int	count;

	count = 0;
	if (nbr == -2147483648)
		count += ft_printstr("-2147483648");
	else if (nbr < 0 && nbr > -2147483648)
	{
		count += ft_printchar('-');
		nbr = -nbr;
		count += ft_printnbr(nbr);
	}
	else if (nbr >= 0 && nbr < 10)
		count += ft_printchar(nbr + 48);
	else if (nbr >= 10)
	{
		count += ft_printnbr(nbr / 10);
		count += ft_printnbr(nbr % 10);
	}
	return (count);
}

int	ft_printunbr(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr >= 0 && nbr < 10)
		count += ft_printchar(nbr + 48);
	else if (nbr >= 10)
	{
		count += ft_printnbr(nbr / 10);
		count += ft_printnbr(nbr % 10);
	}
	return (count);
}

int	main(void)
{
	int	x;

	x = -42;
	//ft_printnbr(x);
	ft_printunbr(x);
	ft_printchar('\n');
	return (0);
}
*/

static int	ft_printhexa(char specifier, int nbr)
{
	int		count;
	char	*set;

	count = 0;
	if (specifier == 'X')
		set = "ABCDEF";
	else
		set = "abcdef";
	if (nbr == 10)
		count += ft_printchar(set[0]);
	else if (nbr == 11)
		count += ft_printchar(set[1]);
	else if (nbr == 12)
		count += ft_printchar(set[2]);
	else if (nbr == 13)
		count += ft_printchar(set[3]);
	else if (nbr == 14)
		count += ft_printchar(set[4]);
	else if (nbr == 15)
		count += ft_printchar(set[5]);
	return (count);
}

int	ft_printnbr(char specifier, long int nbr, int base)
{
	int		count;
	
	count = 0;
	if (nbr == -2147483648 && base == 10)
		count += ft_printstr("-2147483648");
	if (nbr < 0 && nbr > -2147483648 && base == 10)
	{
		count += ft_printchar('-');
		nbr = -nbr;
		count += ft_printnbr(specifier, nbr, base);
	}
	if (nbr >= 0 && nbr < 10)
		count += ft_printchar(nbr + 48);
	if (base == 16 && nbr >= 10 && nbr < base)
		count += ft_printhexa(specifier, nbr);
	if (nbr >= base)
	{
		count += ft_printnbr(specifier, (nbr / base), base);
		count += ft_printnbr(specifier, (nbr % base), base);
	}
	return (count);
}

int	ft_printptr(void *ptr)
{
	int			count;
	long int	p;

	count = 0;
	p = (long int)&ptr;
	count += write(1, "0x", 2);
	count += ft_printnbr('x', p, 16);
	return (count);
}

int	main(void)
{
	char	*p;
	
	p = "abcdef";
	ft_printptr(p);
	ft_printchar('\n');
	printf("real: %p", &p);
	ft_printchar('\n');
	return (0);
}