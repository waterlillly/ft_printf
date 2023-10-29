/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 06:06:02 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/10/29 19:34:57 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINTF_H
# define FTPRINTF_H

# include "libft.a"


int	ft_printf(const char *, ...);
int	ft_printchar(int c);
int	ft_printstr(char *s);
int	ft_printnbr(char specifier, long int nbr, int base);
//int	ft_printunbr(unsigned int nbr);
//int	ft_printptr(void *ptr);
//int	ft_printhexa(char specifier, long int nbr);
int	ft_checkif(const char *data, char c);

#endif