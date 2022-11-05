/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:46:38 by ybenlafk          #+#    #+#             */
/*   Updated: 2022/11/05 11:47:04 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_checks(va_list ap, const char c, int *len)
{
	if (c == 'd')
		ft_putnbr(va_arg(ap, int), len);
	else if (c == 'u')
		ft_unsigned(va_arg(ap, unsigned int), len);
	else if (c == 's')
		ft_putstr(va_arg(ap, char *), len);
	else if (c == '%')
		ft_putchar('%', len);
	else if (c == 'p')
		ft_adress(va_arg(ap, unsigned long long), len);
	else if (c == 'c')
		ft_putchar(va_arg(ap, int), len);
	else if (c == 'i')
		ft_putnbr(va_arg(ap, int), len);
	else if (c == 'x')
		ft_convert_lower(va_arg(ap, size_t), len);
	else if (c == 'X')
		ft_convert_upper(va_arg(ap, size_t), len);
	else
		ft_putchar(c, len);
}

int	ft_printf(const char *p, ...)
{
	va_list	ptr;
	int		len;

	len = 0;
	va_start(ptr, p);
	while (*p)
	{
		if (*p == '%' && !p[1])
			break ;
		if (*p == '%')
		{
			p++;
			ft_checks(ptr, *p, &len);
		}
		else
			ft_putchar(*p, &len);
		p++;
	}
	va_end(ptr);
	return (len);
}
