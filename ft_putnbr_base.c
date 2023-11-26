/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 02:05:44 by igama             #+#    #+#             */
/*   Updated: 2023/11/26 05:38:31 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr_base(int n)
{
	write(1, "0x", 2);
	/*if (n == -2147483648)
		write(1, "-2147483648", 11);
	if (n < 0 && n > -2147483648)
	{
		ft_putchar('-');
		n = -n;
	}*/
	if (n > 9)
	{
		ft_putnbr_base(n / 10);
		ft_putnbr_base(n % 10);
	}
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	if ((n >= 'a' && n <= 'f') || (n >= 'A' && n <= 'F'))
		ft_putchar(n);
}

int	ft_digits_base(int n)
{
	int	n_digits;

	n_digits = 0;
	/*ft_putnbr_base(n);
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);*/
	if (n < 0)
	{
		n *= -1;
		n_digits++;
	}
	while (n > 0)
	{
		n /= 10;
		n_digits++;
	}
	return(n_digits);
}
