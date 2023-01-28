/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaria-m <cmaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:59:23 by cmaria-m          #+#    #+#             */
/*   Updated: 2023/01/28 16:49:15 by cmaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putadress(unsigned long n, int *len)
{
	char	str[25];
	char	*hexo;
	int		i;

	i = 0;
	hexo = "0123456789abcdef";
	if (n == 0)
		ft_putstr("(nil)", len);
	else
		(*len) += write(1, "0x", 2);
	while (n != 0)
	{
		str[i] = hexo[n % 16];
		n = n / 16;
		i++;
	}
	while (i--)
		ft_putchar(str[i], len);
}

void	ft_putnbr(int n, int *len)
{
	if (n == -2147483648)
	{
		ft_putchar('-', len);
		ft_putchar('2', len);
		ft_putnbr(147483648, len);
	}
	else if (n < 0)
	{
		ft_putchar('-', len);
		n = -n;
		ft_putnbr(n, len);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10, len);
		ft_putnbr(n % 10, len);
	}
	else
		ft_putchar(n + '0', len);
}

void	ft_unsigned_nbr(unsigned int n, int *len)
{
	if (n >= 10)
		ft_unsigned_nbr(n / 10, len);
	ft_putchar(n % 10 + '0', len);
}

void	ft_hexa(unsigned int n, int *len, char l)
{
	char	str[25];
	char	*hexo;
	int		i;

	i = 0;
	if (n == 0)
		ft_putchar('0', len);
	if (l == 'x')
		hexo = "0123456789abcdef";
	else
		hexo = "0123456789ABCDEF";
	while (n != 0)
	{
		str[i] = hexo[n % 16];
		n = n / 16;
		i++;
	}
	while (i--)
		ft_putchar(str[i], len);
}
