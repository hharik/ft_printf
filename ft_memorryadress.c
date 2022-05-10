/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memorryadress.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:02:34 by hharik            #+#    #+#             */
/*   Updated: 2021/11/23 12:02:37 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_len3(unsigned long long num)
{
	int	count;

	count = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		count++;
		num = num / 16;
	}
	return (count);
}

int	ft_hexmemorry(unsigned long long n)
{
	int	count;

	count = ft_len3(n);
	if (n > 15)
		ft_hexmemorry(n / 16);
	if (n % 16 > 9)
		ft_putchar(n % 16 + 87);
	else if (n % 16 <= 9)
		ft_putchar(n % 16 + 48);
	return (count);
}

int	ft_memorryadress1(unsigned long long num)
{
	int	count;

	count = 0;
	count += ft_putstr("0x");
	count = count + ft_hexmemorry(num);
	return (count);
}
