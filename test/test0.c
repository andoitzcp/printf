/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acampo-p <acampo-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 21:32:50 by acampo-p          #+#    #+#             */
/*   Updated: 2023/01/18 10:31:30 by acampo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	c = 'a';
	char	*s = "test";
	int		d = -1000;
	int		ui = 1000;
	
	printf("HARCODED\n");
	printf("this is a test\n");
	printf("SINGLE CHAR\n");
	printf("this is a test: %c\n", c);
	printf("STRING\n");
	printf("this is a test: %s\n", s);
	printf("POINTER\n");
	printf("this is a test: %p\n", s);
	printf("NULL POINTER\n");
	printf("this is a test: %p\n", NULL);
	printf("DECIMAL\n");
	printf("this is a test: %d\n", d);
	printf("INTEGER\n");
	printf("this is a test: %i\n", d);
	printf("U_DECIMAL\n");
	printf("this is a test: %u\n", d);
	printf("HEXADECIMAL_CAP\n");
	printf("this is a test: %X\n", ui);
	printf("HEXADECIMAL_UNCAP\n");
	printf("this is a test: %x\n", -10);
	printf("PERCENTAGE\n");
	printf("this is a test: %%\n");
	printf("MY_ITOH_TES\n");
	ft_putptr(s);
	printf("\n");
	printf("MY_PUTSTR_TEST\n");
	ft_putstr(s);
	printf("\n");
	printf("MY_NULPTR_TEST\n");
	ft_putptr(NULL);
	printf("\n");
	printf("MY_UPRHEX_TEST\n");
	ft_putuprhex(ui);
	printf("\n");
	printf("MY_LWRHEX_TEST\n");
	ft_putlwrhex(-10);
	printf("\n");
	printf("MY_INT_TEST\n");
	ft_putint(ui);
	printf("\n");
	printf("MY_NEGINT_TEST\n");
	ft_putint(d);
	printf("\n");
}
