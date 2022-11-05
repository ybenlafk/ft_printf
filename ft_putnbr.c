/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:51:56 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/11/04 10:52:29 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, int *len)
{
	if (nbr == -2147483648)
	{
		ft_putstr("-2147483648", len);
		return ;
	}
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-', len);
	}
	if (nbr < 10)
		ft_putchar(nbr + '0', len);
	else
	{
		ft_putnbr(nbr / 10, len);
		ft_putnbr(nbr % 10, len);
	}
}
