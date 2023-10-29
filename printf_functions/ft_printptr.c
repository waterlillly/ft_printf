/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:23:09 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/10/29 15:45:04 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

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