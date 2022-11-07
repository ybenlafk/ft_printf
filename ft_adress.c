/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:37:17 by ybenlafk          #+#    #+#             */
/*   Updated: 2022/11/07 12:14:56 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex(unsigned long long nbr, int *len)
{
	unsigned long long	base_len;
	char				*base;

	base_len = 16;
	base = "0123456789abcdef";
	if (nbr < base_len)
		ft_putchar(base[nbr], len);
	else
	{
		ft_hex(nbr / base_len, len);
		ft_hex(nbr % base_len, len);
	}
}

void	ft_adress(unsigned long long p, int *len)
{
	unsigned long long	ptr;

	ptr = p;
	ft_putstr("0x", len);
	ft_hex(ptr, len);
}
