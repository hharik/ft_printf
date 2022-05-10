/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:04:31 by hharik            #+#    #+#             */
/*   Updated: 2021/11/23 12:04:35 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	unsigned int		b;
	int					count;

	count = 0;
	if (n < 0)
	{
		count += ft_putchar('-');
		b = n * -1;
	}
	else
	{
		b = n;
	}
	if (b >= 0 && b <= 9)
		count += ft_putchar(b + '0');
	else
	{
		count += ft_putnbr(b / 10);
		count += ft_putnbr(b % 10);
	}
	return (count);
}
