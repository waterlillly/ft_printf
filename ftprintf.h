/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 06:06:02 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/10/28 14:39:08 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINTF_H
# define FTPRINTF_H

# include "libft.h"

int	ft_printf(const char *, ...);
int	ft_printchar(int c);
int	ft_printstr(char *s);
int	ft_printnbr(int nbr);
int	ft_printunbr(unsigned int unbr);
int	ft_printptr(unsigned long ptr);
int	ft_printhex(char specify, unsigned int unbr);
int	ft_checkif(const char *data, char c);
int	ft_islower(int c);
int	ft_isupper(int c);

#endif