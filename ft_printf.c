/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:42:50 by igama             #+#    #+#             */
/*   Updated: 2023/11/26 05:36:50 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_format(char c, va_list arguments)
{
	if (c == 'c')
		return (ft_putchar(va_arg(arguments, int)), 1);
	else if (c == 'i' || c == 'd')
		return (ft_digits(va_arg(arguments, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(arguments, char *)));
	else if (c == 'u')
		return (ft_digits_uns(va_arg(arguments, unsigned int)));
	else if (c == '%')
		return (ft_putchar('%'), 1);
	else if (c == 'p')
		return (ft_itoa(va_arg(arguments, char *)));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list		arguments;
	int			i;

	i = 0;
	va_start(arguments, str);
	while (*str)
	{
		while (*str == '%')
		{
			str++;
			i += ft_format(*str, arguments);
			str++;
		}
		if (*str != '\0')
		{
			ft_putchar(*str);
			str++;
			i++;
		}
	}
	return (i);
}

/*#include <stdio.h>

int	main(void)
{
	ft_printf("%i %i", 2147483647, (int)-2147483648);
	printf("%i %i", 2147483647, (int)-2147483648);
}*/
