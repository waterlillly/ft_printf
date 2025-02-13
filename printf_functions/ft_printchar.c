/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 06:00:45 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/11/06 18:58:05 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int c)
{
	int		count;
	char	d;

	count = 0;
	d = (char)c;
	count += write(1, &d, 1);
	return (count);
}
