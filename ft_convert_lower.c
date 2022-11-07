/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_lower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:06:58 by ybenlafk          #+#    #+#             */
/*   Updated: 2022/11/07 12:13:51 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convert_lower(unsigned int nbr, int *len)
{
	char			*base;

	base = "0123456789abcdef";
	if (nbr < 16)
		ft_putchar(base[nbr], len);
	else
	{
		ft_convert_lower(nbr / 16, len);
		ft_convert_lower(nbr % 16, len);
	}
}
