/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:03:04 by hharik            #+#    #+#             */
/*   Updated: 2021/11/23 12:03:06 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printfv1(const char *str, va_list vl, int i, int count)
{
	while (str[i] != '\0')
	{
		if (str[i] != '%')
			count = count + ft_putchar(str[i]);
		else if ((str[++i] == 'd') || (str[i] == 'i'))
			count = count + ft_putnbr(va_arg(vl, int));
		else if (str[i] == 's')
			count = count + ft_putstr(va_arg(vl, char *));
		else if (str[i] == 'c')
			count = count + ft_putchar(va_arg(vl, int));
		else if (str[i] == 'x')
			count = count + ft_hex(va_arg(vl, unsigned int));
		else if (str[i] == 'X')
			count = count + ft_hexupper(va_arg(vl, unsigned int));
		else if (str[i] == 'u')
			count = count + ft_u(va_arg(vl, int));
		else if (str[i] == '%')
			count = count + ft_putchar(str[i]);
		else if (str[i] == 'p')
			count = count + ft_memorryadress1(va_arg(vl, unsigned long long));
		i++;
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	vl;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(vl, str);
	i = 0;
	count = ft_printfv1(str, vl, i, count);
	va_end(vl);
	return (count);
}
