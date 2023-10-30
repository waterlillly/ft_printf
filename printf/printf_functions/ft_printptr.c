/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:23:09 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/10/30 21:35:18 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
/*
static int	ft_printnbrptr(unsigned long p)
{
	int		count;
	char	*set;

	count = 0;
	set = "0123456789abcdef";
	if (p >= 0 && p < 10)
		count += ft_printnbr('x', p, 16);
	if (p >= 10 && p < 16)
		count += ft_printchar(set[p]);
	count += ft_printnbrptr(p / 16);
	count += ft_printnbrptr(p % 16);
	return (count);
}
*/
int	ft_printptr(void *ptr)
{
	int			count;
	long int	p;

	count = 0;
	p = (long int)&ptr;
	count += ft_printstr("0x");
	count += ft_printnbr('x', p, 16);
	return (count);
}