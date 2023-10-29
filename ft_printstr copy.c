/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 06:02:45 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/10/29 12:11:24 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

int	ft_printstr(char *s)
{
	int	count;

	count = 0;
	while (*s++)
		count += ft_printchar(*s);
	return (count);
}