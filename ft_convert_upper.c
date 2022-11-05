/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_upper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:06:58 by ybenlafk          #+#    #+#             */
/*   Updated: 2022/11/04 11:16:43 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convert_upper(unsigned int nbr, int *len)
{
	unsigned int	base_len;
	char			*base;

	base = "0123456789ABCDEF";
	base_len = 16;
	if (nbr < base_len)
		ft_putchar(base[nbr], len);
	else
	{
		ft_convert_upper(nbr / base_len, len);
		ft_convert_upper(nbr % base_len, len);
	}
}
