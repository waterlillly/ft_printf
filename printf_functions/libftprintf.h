/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 06:06:02 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/11/01 21:00:36 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <string.h>
# include <stdio.h>

int	ft_printf(const char *format, ...);
int	ft_printchar(int c);
int	ft_printstr(char *s);
int	ft_printnbr(char specifier, long int nbr, int base);
int	ft_printptr(void *ptr);
int	ft_decideformat(va_list args, const char *format, int i);

#endif
