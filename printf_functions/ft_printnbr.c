/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 08:38:19 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/10/28 14:34:25 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

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
	else if (nbr >= 10 && nbr < 2147483648)
	{
		count += ft_printnbr(nbr / 10);
		count += ft_printnbr(nbr % 10);
	}
	return (count);
}