/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaria-m <cmaria-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:58:00 by cmaria-m          #+#    #+#             */
/*   Updated: 2023/01/28 14:38:58 by cmaria-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

void		ft_putchar(char c, int *len);
void		ft_putstr(char *str, int *len);
void		ft_putadress(unsigned long n, int *len);
void		ft_putnbr(int n, int *len);
void		ft_unsigned_nbr(unsigned int n, int *len);
void		ft_hexa(unsigned int n, int *len, char l);
void		percentage_check(char c, va_list *args, int *len);
int			ft_printf(const char *str, ...);

#endif