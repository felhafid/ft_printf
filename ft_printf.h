/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felhafid <felhafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 15:15:59 by felhafid          #+#    #+#             */
/*   Updated: 2024/01/15 18:18:21 by felhafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_putnbr_base(unsigned int n, char *base);
int	ft_putp(unsigned long long nb);
int	ft_printf(const char *s, ...);
int	ft_putnbr_uns(unsigned int n);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_putchar(char c);

#endif