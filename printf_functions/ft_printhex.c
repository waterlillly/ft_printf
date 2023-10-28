/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 08:44:14 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/10/28 14:35:16 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

int	ft_printhex(char specify, unsigned int unbr)
{
	int		count;
	char	*base;

	count = 0;
	if (specify == 'x')
		base = "0123456789abcdef";
	else if (specify == 'X')
		base = "0123456789ABCDEF";
	
	
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