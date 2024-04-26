/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EVALUATION.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:46:51 by lbaumeis          #+#    #+#             */
/*   Updated: 2023/10/22 11:54:42 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//testing edge cases
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>

int main(void)
{
	char *null_str = NULL;
	char *special_chars = "\t\n\r\b\a\\";
	int min_input = INT_MIN;
	int max_input = INT_MAX;

	ft_printf("A: Null input: %s\n", null_str);
	printf("real A: Null input: %s\n", null_str);
	ft_printf("B: special char string: %s\n print a percent sign: %%\n", special_chars);
	printf("real B: special char string: %s\n print a percent sign: %%\n", special_chars);
	ft_printf("C: Min input: %d\n", min_input);
	printf("real C: Min input: %d\n", min_input);
	ft_printf("D: Max input: %d\n", max_input);
	printf("real D: Max input: %d\n", max_input);
	return (0);
}
/*
int	main(void)
{
	ft_printf("E: Number [%20i]\n", 42);
	printf("real E: Number [%20i]\n", 42);
	ft_printf("F: Number [%+0*i]\n", 8, 42);
	printf("real F: Number [%+0*i]\n", 8, 42);
	ft_printf("G: Integer: %d, Floating point: %f, Character: %c, String: %s\n", 42, 3.14, 'a', "Hello, ft_printf!");
	printf("real G: Integer: %d, realFloating point: %f, realCharacter: %c, realString: %s\n", 42, 3.14, 'a', "Hello, ft_printf!");
	ft_printf("H: |%0*d|%0*d|\n",  -3, 10012, -3, -10012);
	printf("real H: |%0*d|%0*d|\n",  -3, 10012, -3, -10012);
	ft_printf("I: |%-*d|%-*d|\n",  5, 10012, 5, -10012);
	printf("real I: |%-*d|%-*d|\n",  5, 10012, 5, -10012);
	return (0);
}
*/