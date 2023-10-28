/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 08:44:14 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/10/28 12:23:32 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

int	ft_printhex(char specifier, void *ptr)
{
	int		count;
	char	*base;
	void	**ptr_to_ptr;

	count = 0;
	ptr_to_ptr = &ptr;
	if (specifier == 'p')
	{
		count += ft_printstr("0x");
		base = "0123456789abcdef";
	}
	else if (specifier == 'x')
		base = "0123456789abcdef";
	else if (specifier == 'X')
		base = "0123456789ABCDEF";
	
	
}

/*
else if (ft_islower(specifier))
	base = "0123456789abcdef";
else if (ft_isupper(specifier))
	base = "0123456789ABCDEF";
*/