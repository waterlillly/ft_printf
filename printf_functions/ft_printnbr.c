/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 08:38:19 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/10/28 12:23:42 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

int	ft_printnbr(long int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		count += ft_printstr("-2147483648");
	else if (n < 0 && n > -2147483648)
	{
		count += ft_printchar('-');
		n = -n;
		count += ft_printnbr(n);
	}
	else if (n >= 0 && n < 10)
		count += ft_printchar(n + 48);
	else if (n >= 10 && n < 2147483648)
	{
		count += ft_printnbr(n / 10);
		count += ft_printnbr(n % 10);
	}
	return (count);
}