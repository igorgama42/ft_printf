/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:03:49 by igama             #+#    #+#             */
/*   Updated: 2023/11/22 22:09:13 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

void	ft_putchar(char c);
int		ft_putnbr(int n);
int		digits(int n);
char	*ft_itoa(int n);
int		ft_putnbr_base(int n);
int		ft_printf(const char *, ...);
int		ft_putstr(char *c);
int		ft_putnbr_uns(unsigned int n);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *s);
#endif
