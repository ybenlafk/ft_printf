/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_lower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:06:58 by ybenlafk          #+#    #+#             */
/*   Updated: 2022/11/04 11:41:19 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_convert_lower(unsigned int nbr, int *len)
{
	unsigned int	base_len;
	char			*base;

	base = "0123456789abcdef";
	base_len = 16;
	if (nbr < base_len)
		ft_putchar(base[nbr], len);
	else
	{
		ft_convert_lower(nbr / base_len, len);
		ft_convert_lower(nbr % base_len, len);
	}
}
