/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acampo-p <acampo-p@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:08:37 by acampo-p          #+#    #+#             */
/*   Updated: 2022/11/28 15:30:47 by acampo-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c < 65)
		return (0);
	else if (c > 90 && c < 97)
		return (0);
	else if (c > 122)
		return (0);
	else
		return (1);
}
