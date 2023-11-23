/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:42:50 by igama             #+#    #+#             */
/*   Updated: 2023/11/22 22:28:23 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_format(char c, va_list arguments)
{
	if (c == 'c')
	{
		ft_putchar(va_arg(arguments, int));
		return (1);
	}
	else if (c == 'i' || c == 'd')
	{	
		return (ft_putnbr(va_arg(arguments, int)));
	}
	else if (c == 's')
	{
		return (ft_putstr(va_arg(arguments, char *)));
	}
	else if (c == 'u')
		return (ft_putnbr_uns(va_arg(arguments, unsigned int)));
	else if (c == '%')
	{
		ft_putchar('%');
		return(1);
	}
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
		if (*str == '%')
		{
			str++;
			i += ft_format(*str, arguments);
			str++;
		}
		ft_putchar(*str);
		str++;
		i++;
	}
	return (i);
}

int	main(void)
{
	ft_printf("%c", 'a');
}
