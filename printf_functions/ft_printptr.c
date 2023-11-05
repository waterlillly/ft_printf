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

int	ft_printptr(void *ptr)
{
		int			count;
		long int	p;

	count = 0;
	p = (long int)ptr;
	count += ft_printstr("0x");
	count += ft_printnbr('x', p, 16);
	return (count);
}