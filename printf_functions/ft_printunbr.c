/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:09:15 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/10/29 12:09:39 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

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