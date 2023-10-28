/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkif.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 10:55:44 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/10/28 13:40:56 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checkif(const char *data, char c)
{
	while (*data)
	{
		if (*data == c)
			return (1);
		else
			*data++;
	}
	return (0);
}