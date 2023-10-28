/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 06:06:02 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/10/28 12:24:11 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINTF_H
# define FTPRINTF_H

# include "libft.h"

int	ft_printf(const char *, ...);
int	ft_printchar(const char c);
int	ft_printstr(const char *s);
int	ft_printnbr(long int n);
int	ft_printhex(char specifier, void *ptr);
//int	ft_checkif(const char *data, char c);
#endif