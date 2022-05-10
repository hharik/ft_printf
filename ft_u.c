/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:05:54 by hharik            #+#    #+#             */
/*   Updated: 2021/11/23 12:06:03 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_len1(long long num)
{
	int	count;

	count = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		count++;
		num = num / 10;
	}
	return (count);
}

void	ft_putnbr2(long long n)
{
	unsigned int	b;

	if (n < 0)
	{
		ft_putchar('-');
		b = n * -1;
	}
	else
	{
		b = n;
	}
	if (b >= 0 && b <= 9)
		ft_putchar(b + '0');
	else
	{
		ft_putnbr2(b / 10);
		ft_putnbr2(b % 10);
	}
}

int	ft_u(long long num)
{
	unsigned long	max;

	max = 4294967296;
	if (num < 0)
	{
		num *= -1;
		max = max - num;
		ft_putnbr2(max);
		return (ft_len1(max));
	}
	else
	{
		ft_putnbr2(num);
		return (ft_len1(num));
	}
}
