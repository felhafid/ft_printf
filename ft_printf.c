/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:51:04 by felhafid          #+#    #+#             */
/*   Updated: 2024/01/16 15:40:22 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_charactere(va_list p, char i)
{
	int	count;

	count = 0;
	if (i == '%')
		count = ft_putchar('%');
	if (i == 'c')
		count = ft_putchar(va_arg(p, int));
	if (i == 's')
		count = ft_putstr(va_arg(p, char *));
	if (i == 'd' || i == 'i')
		count = ft_putnbr(va_arg(p, int));
	if (i == 'X')
		count = ft_putnbr_base(va_arg(p, unsigned int), "0123456789ABCDEF");
	if (i == 'x')
		count = ft_putnbr_base(va_arg(p, unsigned int), "0123456789abcdef");
	if (i == 'u')
		count = ft_putnbr_uns(va_arg(p, unsigned int));
	if (i == 'p')
	{
		count = ft_putstr("0x");
		count += ft_putp(va_arg(p, unsigned long long));
	}
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	p;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(p, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			count += ft_charactere(p, s[i]);
		}
		else
			count += ft_putchar(s[i]);
		i++;
	}
	va_end(p);
	return (count);
}
