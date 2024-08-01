/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:58:49 by felhafid          #+#    #+#             */
/*   Updated: 2024/05/08 10:51:29 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_countnember(unsigned long long s)
{
	int	count;

	count = 0;
	if (s == 0)
		return (1);
	while (s)
	{
		s = s / 16;
		count++;
	}
	return (count);
}

int	ft_putp(unsigned long long nb)
{
	int		count;
	char	*base;

	count = ft_countnember(nb);
	base = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_putp(nb / 16);
		ft_putp(nb % 16);
	}
	if (nb < 16)
	{
		ft_putchar(base[nb]);
	}
	return (count);
}
