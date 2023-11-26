/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 09:55:28 by igama             #+#    #+#             */
/*   Updated: 2023/11/26 11:26:13 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putx(long long int n)
{
	char	array[16] = {"0123456789abcdef"};

	if (n > 15)
	{
		ft_putx(n / 16);
		ft_putx(n % 16);
	}
	if (n >= 0 && n <= 15)
		ft_putchar(array[n]);
}

long long int	ft_digits_x(long long int n)
{
	int	n_digits;

	n_digits = 0;
	ft_putx(n);
	if (n < 0)
	{
		n *= -1;
		n_digits++;
	}
	while (n > 0)
	{
		n /= 16;
		n_digits++;
	}
	if (n == 0 && n_digits == 0)
		return (1);
	return (n_digits);
}
