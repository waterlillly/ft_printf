/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 08:38:19 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/10/30 13:48:33 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ftprintf.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

static int	ft_printhexa(char specifier, int nbr)
{
	int		count;
	char	*set;

	count = 0;
	if (specifier == 'X')
		set = "ABCDEF";
	else if (specifier == 'x')
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
	int	count;
	
	count = 0;
	if (specifier == 'u')
		nbr = (unsigned int)nbr;
	if (nbr == -2147483648 && base == 10)
		count += ft_printstr("-2147483648");
	if (nbr < 0 && nbr > -2147483648 && base == 10)
	{
		count += ft_printchar('-');
		count += ft_printnbr(specifier, -nbr, base);
	}
	else if (nbr >= 0 && nbr < 10)
		count += ft_printchar(nbr + 48);
	else if (base == 16 && nbr >= 10 && nbr < base)
		count += ft_printhexa(specifier, nbr);
	else if (nbr >= base)
	{
		count += ft_printnbr(specifier, (nbr / base), base);
		count += ft_printnbr(specifier, (nbr % base), base);
	}
	return (count);
}
///*
int	main(void)
{
	ft_printnbr('u', -16, 10);
	printf("\n");
	ft_printnbr('u', 16, 10);
	printf("\n");
	printf("real -unsigned: %u\nreal +unsigned: %u\n", -16, 16);
	return (0);
}
//*/