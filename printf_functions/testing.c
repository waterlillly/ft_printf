/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbaumeis <lbaumeis@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 19:17:40 by lbaumeis          #+#    #+#             */
/*   Updated: 2024/06/02 19:19:21 by lbaumeis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//TESTING

#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include "ft_printf.h"

void test_simple_conversions()
{
    ft_printf("Hello %s!", "World");
    printf("Hello %s!", "World");
    printf("/n");
    ft_printf("%d", 123);
    printf("%d", 123);
    printf("/n");
    ft_printf("%f", 3.14);
    printf("%f", 3.14);
    printf("/n");
    ft_printf("%c", 'A');
    printf("%c", 'A');
    printf("/n");
    ft_printf("%p", (void*)0xdeadbeef);
    printf("%p", (void*)0xdeadbeef);
    printf("/n");
    ft_printf("%x", 255);
    printf("%x", 255);
    printf("/n");
}

void test_special_cases()
{
    ft_printf("%s", "");
    ft_printf("%s", "");
    printf("/n");
    ft_printf("%d", INT_MIN);
    ft_printf("%d", INT_MIN);
    printf("/n");
    ft_printf("%d", INT_MAX);
    ft_printf("%d", INT_MAX);
    printf("/n");
    ft_printf("%c", '\0');
    ft_printf("%c", '\0');
    printf("/n");
    ft_printf("%s", NULL);
    ft_printf("%s", NULL);
    printf("/n");
}

void test_multiple_args()
{
    ft_printf("%s %d %f", "Hello", 123, 3.14);
    printf("%s %d %f", "Hello", 123, 3.14);
    printf("/n");
}

void test_sequences()
{
    ft_printf("%d%d%d", 1, 2, 3);
    printf("%d%d%d", 1, 2, 3);
    printf("/n");
    ft_printf("%s%s%s", "one", "two", "three");
    printf("%s%s%s", "one", "two", "three");
    printf("/n");
}

void test_bonus_printf()
{
    int num = 12345;
    ft_printf("%.*d\n", 3, num);
    printf("%.*d\n", 3, num);
    printf("/n");
    ft_printf("%.*d\n", 5, num);
    printf("%.*d\n", 5, num);
    printf("/n");
    ft_printf("%-10d\n", num);
    printf("%-10d\n", num);
    printf("/n");
    ft_printf("%-10s\n", "test");
    printf("%-10s\n", "test");
    printf("/n");
    ft_printf("%04d\n", num);
    printf("%04d\n", num);
    printf("/n");
    ft_printf("%05d\n", num);
    printf("%05d\n", num);
    printf("/n");
    ft_printf("%d\n", INT_MIN);
    printf("%d\n", INT_MIN);
    printf("/n");
    ft_printf("%-d\n", INT_MAX);
    printf("%-d\n", INT_MAX);
    printf("/n");
    ft_printf("#%-10d\n", num);
    printf("#%-10d\n", num);
    printf("/n");
    ft_printf("#%010d\n", num);
    printf("#%010d\n", num);
    printf("/n");
    ft_printf("#%04d\n", num);
    printf("#%04d\n", num);
    printf("/n");
}

int main()
{
	test_simple_conversions();
	test_special_cases();
	test_multiple_args();
	test_sequences();
 	test_bonus_printf();
    return 0;
}
