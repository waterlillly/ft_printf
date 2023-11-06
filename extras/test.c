/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:46:58 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/11/06 21:42:21 by lbaumeis         ###   ########.fr       */
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
	char 		*special_chars = "\t\n\r\b\a\\";
	long int 	min = LONG_MIN;
	long int 	max = LONG_MAX;
	unsigned long int 	minu = ULONG_MAX;
	unsigned long int 	maxu = -ULONG_MAX;

	ft_printf(mystring, mystrptr[0], mystrptr, &mystrptr, mydiu, mydiu, mydiu, mydiu, mydiu);
	printf(string, mystrptr[0], mystrptr, &mystrptr, mydiu, mydiu, mydiu, mydiu, mydiu);
	ft_printf("mine: %p\n", 0);
	printf("real: %p\n", (void *)0);
	ft_printf("my special_chars: %s\n", special_chars);
	printf("real special_chars: %s\n", special_chars);
	/*ft_printf("mine: min: %x max: %x\n", min, max);
	printf("real: min: %x max: %x\n", min, max);
	ft_printf("mine: min: %d max: %d\n", min, max);
	printf("real: min: %d max: %d\n", min, max);
	ft_printf("mine: min: %i max: %i\n", min, max);
	printf("real: min: %i max: %i\n", min, max);
	ft_printf("mine: minlongint: %p maxlongint: %p\n", (void *)min, (void *)max);
	printf("real: minlongint: %p maxlongint: %p\n", (void *)min, (void *)max);
	ft_printf("mine: minU: %p maxU: %p\n", (void *)minu, (void *)maxu);
	printf("real: minU: %p maxU: %p\n", (void *)minu, (void *)maxu);*/
	return (0);
}
