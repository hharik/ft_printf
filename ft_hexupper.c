/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:01:45 by hharik            #+#    #+#             */
/*   Updated: 2021/11/23 12:01:59 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexupper(unsigned int n)
{
	int	count;

	count = ft_len(n);
	if (n > 15)
		ft_hexupper(n / 16);
	if (n % 16 > 9)
		ft_putchar(n % 16 + 55);
	else if (n % 16 <= 9)
		ft_putchar(n % 16 + 48);
	return (count);
}
