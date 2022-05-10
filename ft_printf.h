/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:03:28 by hharik            #+#    #+#             */
/*   Updated: 2021/11/23 12:03:36 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_strlen(char *str);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int num);
char	ft_printupper(char *str);
int		ft_u(long long num);
int		ft_hex(unsigned int n);
int		ft_printf(const char *str, ...);
int		ft_hexupper(unsigned int n);
int		ft_len(unsigned int num);
int		ft_memorryadress1(unsigned long long num);

#endif
