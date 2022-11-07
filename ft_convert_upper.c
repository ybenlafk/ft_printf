/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_upper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:06:58 by ybenlafk          #+#    #+#             */
/*   Updated: 2022/11/07 12:14:10 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convert_upper(unsigned int nbr, int *len)
{
	char			*base;

	base = "0123456789ABCDEF";
	if (nbr < 16)
		ft_putchar(base[nbr], len);
	else
	{
		ft_convert_upper(nbr / 16, len);
		ft_convert_upper(nbr % 16, len);
	}
}
