/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:46:49 by ybenlafk          #+#    #+#             */
/*   Updated: 2022/11/04 11:40:54 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
void	ft_putstr(char *s, int *len);
void	ft_adress(unsigned long long p, int *len);
void	ft_putnbr(int nbr, int *len);
void	ft_putchar(char c, int *len);
void	ft_unsigned(unsigned int nbr, int *len);
void	ft_convert_lower(unsigned int nbr, int *len);
void	ft_convert_upper(unsigned int nbr, int *len);

#endif
