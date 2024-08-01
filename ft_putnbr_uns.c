/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 16:47:27 by felhafid          #+#    #+#             */
/*   Updated: 2024/01/16 13:19:30 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_countnember(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

int	ft_putnbr_uns(unsigned int n)
{
	int	count;

	count = ft_countnember(n);
	if (n <= 9)
		ft_putchar(n + 48);
	else if (n > 9)
	{
		ft_putnbr_uns(n / 10);
		ft_putnbr_uns(n % 10);
	}
	return (count);
}
// int main ()
// {
// 	ft_putnbr_uns(0);
// }