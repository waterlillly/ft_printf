/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:46:58 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/11/06 18:37:20 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int main(void)
{
	char		*mystrptr = "abcde321";
	int			mydiu = -52;
	const char	*mystring = "\n myChar: %c\n myString: %s\n myAddress: %p\n myDecimal: %d\n myInteger: %i\n myUnsigned: %u\n myhex_lower: %x\n myHEX_UPPER: %X\n";
	const char	*string = "\n Char: %c\n String: %s\n Address: %p\n Decimal: %d\n Integer: %i\n Unsigned: %u\n hex_lower: %x\n HEX_UPPER: %X\n\n";
	char 		*null_str = NULL;
	char 		*special_chars = "\t\n\r\b\a\\";
	int 		min = INT_MIN;
	int 		max = INT_MAX;

	ft_printf(mystring, mystrptr[0], mystrptr, &mystrptr, mydiu, mydiu, mydiu, mydiu, mydiu);
	printf(string, mystrptr[0], mystrptr, &mystrptr, mydiu, mydiu, mydiu, mydiu, mydiu);
	ft_printf("mine: %s\n", null_str);
	printf("real: %s\n", null_str);
	ft_printf("my special_chars: %s\n", special_chars);
	printf("real special_chars: %s\n", special_chars);
	ft_printf("mine: min: %x max: %x\n", min, max);
	printf("real: min: %x max: %x\n", min, max);
	ft_printf("mine: min: %d max: %d\n", min, max);
	printf("real: min: %d max: %d\n", min, max);
	ft_printf("mine: min: %i max: %i\n", min, max);
	printf("real: min: %i max: %i\n", min, max);
	ft_printf("mine: min: %u max: %u\n", min, max);
	printf("real: min: %u max: %u\n", min, max);
	ft_printf("mine: min: %X max: %X\n", min, max);
	printf("real: min: %X max: %X\n", min, max);
	return (0);
}