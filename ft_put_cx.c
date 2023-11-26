/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_cx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 11:23:03 by igama             #+#    #+#             */
/*   Updated: 2023/11/26 11:29:40 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_put_cx(long long int n)
{
	char	array[16] = {"0123456789ABCDEF"};

	if (n > 15)
	{
		ft_put_cx(n / 16);
		ft_put_cx(n % 16);
	}
	if (n >= 0 && n <= 15)
		ft_putchar(array[n]);
}

long long int	ft_digits_cx(long long int n)
{
	int	n_digits;

	n_digits = 0;
	ft_put_cx(n);
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
