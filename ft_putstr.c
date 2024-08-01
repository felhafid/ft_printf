/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 12:25:20 by felhafid          #+#    #+#             */
/*   Updated: 2024/01/13 09:34:18 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

// int main ()
// {
// 	int i = -14;
// 	printf("%X", i);
// 	// printf("\n");
// 	// printf("   %d", printf("%s", "hello"));
// }