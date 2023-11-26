/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 02:05:44 by igama             #+#    #+#             */
/*   Updated: 2023/11/26 08:26:30 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr_base(int n)
{
	write(1, "0x", 2);
	if (n > 15)
	{
		ft_putnbr_base(n / 16);
		ft_putnbr_base(n % 16);
	}
	if (n >= 0 && n <= 9)
	{
		ft_putchar(n + '0');
	}
	if (n >= 10 && n <= 15)
	{
		ft_putchar(n + 'a');
	}
}

int	ft_digits_base(int n)
{
	int	n_digits;

	n_digits = 0;
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
