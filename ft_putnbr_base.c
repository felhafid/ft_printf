/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 11:13:00 by felhafid          #+#    #+#             */
/*   Updated: 2024/01/16 13:19:54 by felhafid         ###   ########.fr       */
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
		nb = nb / 16;
		i++;
	}
	return (i);
}

int	ft_putnbr_base(unsigned int n, char *base)
{
	int	count;

	count = ft_countnember(n);
	if (n < 16)
	{
		ft_putchar(base[n]);
	}
	if (n >= 16)
	{
		ft_putnbr_base(n / 16, base);
		ft_putnbr_base(n % 16, base);
	}
	return (count);
}
// int main ()
// {
// 	printf("\n%d", ft_putnbr_base(15, "0123456789abcdef"));
// }