/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:46:58 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/10/30 21:38:23 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <limits.h>
#include <stdio.h>

int main(void)
{
	char		*mystrptr = "abcde321";
	int			mydiu = 52;
	//const char	*string = "\n Char: %c\n String: %s\n Address: %p\n Decimal: %d\n Integer: %i\n Unsigned: %u\n hex_lower: %x\n HEX_UPPER: %X\n";
	//const char	*mystring = "\n myChar: %c\n myString: %s\n myAddress: %p\n myDecimal: %d\n myInteger: %i\n myUnsigned: %u\n myhex_lower: %x\n myHEX_UPPER: %X\n";
	const char	*string = "  Address: %p\n";
	const char	*mystring = "myAddress: %p\n";
	char 		*null_str = 0;
	char 		*special_chars = "\t\n\r\b\a\\";
	int 		min_input = INT_MIN;
	int 		max_input = INT_MAX;

	//ft_printf(mystring, mystrptr[0], mystrptr, &mystrptr, mydiu, mydiu, mydiu, mydiu, mydiu);
	//printf(string, mystrptr[0], mystrptr, &mystrptr, mydiu, mydiu, mydiu, mydiu, mydiu);
	// ft_printf("A: Null input: %s\n", null_str);
	// printf("real A: Null input: %s\n", null_str);
	// ft_printf("B: special char string: %s\n print a percent sign: %%\n", special_chars);
	// printf("real B: special char string: %s\n print a percent sign: %%\n", special_chars);
	// ft_printf("C: Min input: %d\n", min_input);
	// printf("real C: Min input: %d\n", min_input);
	// ft_printf("D: Max input: %d\n", max_input);
	// printf("real D: Max input: %d\n", max_input);
	ft_printf(mystring, &mystrptr);
	printf(string, &mystrptr);
	return (0);
}


// int	main(void)
// {
// 	int 		min_input = INT_MIN;
// 	int 		max_input = INT_MAX;

// 	ft_printf("mine: %x\n", -16);
// 	printf("real one: %x\n", -16);
// 	// printf("========================\n");
// 	ft_printf("mine: %u\n", -16);
// 	printf("real one: %u\n", -16);
// 	ft_printf("mine: %d\n", -16);
// 	printf("real one: %d\n", -16);
// 	ft_printf("mine: %i\n", -16);
// 	printf("real one: %i\n", -16);
// 	ft_printf("mine: %X\n", -16);
// 	printf("real one: %X\n", -16);
// }