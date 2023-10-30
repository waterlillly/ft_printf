/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printchar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 06:00:45 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/10/30 14:32:31 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ftprintf.h"
#include <unistd.h>

int	ft_printchar(char c)
{
	int	count;

	write(1, &c, 1);
	count = 1;
	return (count);
}

int	main(void)
{
	char	c;

	c = 'a';
	ft_printchar(c);
	return (0);
}
