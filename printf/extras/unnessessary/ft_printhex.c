/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 08:44:14 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/10/29 12:38:46 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"
#include "libft.h"

int	ft_printhex(char specifier, unsigned long nbr)
{
	int			count;
	const char	*base;

	count = 0;
	base = "0123456789abcdef";
	if (specifier == 'p')
		count += ft_printstr("0x");
		count += ft_printnbr(nbr)

	if (nbr < ft_strlen(base))
		count += ft_printchar(base[nbr]);
	else
	{
		
	}
	
	
	
}

/*
else if (ft_islower(specifier))
	base = "0123456789abcdef";
else if (ft_isupper(specifier))
	base = "0123456789ABCDEF";

OR: (only lower base)
if (specify == 'X')
	ft_toupper(ft_printhex(...))
*/