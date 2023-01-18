/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acampo-p <acampo-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 21:01:09 by acampo-p          #+#    #+#             */
/*   Updated: 2023/01/17 15:53:06 by acampo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putchar(int c)
{
	char	cc;

	cc = (char) c;
	write(1, &cc, 1);
	return (1);
}

size_t	ft_putstr(char *s)
{
	size_t	indx;

	indx = 0;
	while (s[indx])
	{
		ft_putchar(s[indx]);
		indx++;
	}
	return (indx);
}
