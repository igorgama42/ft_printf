/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:03:49 by igama             #+#    #+#             */
/*   Updated: 2023/11/26 08:27:31 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

void	ft_putchar(char c);
void	ft_putnbr(int n);
int		ft_digits(int n);
void	ft_putnbr_uns(unsigned int n);
int		ft_digits_uns(unsigned int n);
void	ft_putnbr_base(int n);
int		ft_digits_base(int n);
int		ft_printf(const char *, ...);
int		ft_putstr(char *c);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *s);
#endif
