/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaria-m <cmaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 12:08:33 by cmaria-m          #+#    #+#             */
/*   Updated: 2023/01/28 17:08:38 by cmaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	percentage_check(const char c, va_list *args, int *len)
{
	if (c == 'c')
		ft_putchar(va_arg(*args, int), len);
	else if (c == 's')
		ft_putstr(va_arg(*args, char *), len);
	else if (c == 'p')
		ft_putadress(va_arg(*args, unsigned long), len);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(*args, int), len);
	else if (c == 'u')
		ft_unsigned_nbr(va_arg(*args, unsigned int), len);
	else if (c == 'x' || c == 'X')
		ft_hexa(va_arg(*args, unsigned int), len, c);
	else if (c == '%')
		ft_putchar('%', len);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	args;

	len = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			percentage_check(*str, &args, &len);
		}
		else
			ft_putchar(*str, &len);
		str++;
	}
	va_end(args);
	return (len);
}

