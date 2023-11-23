/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igama <igama@student.42.rio>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:10:11 by igama             #+#    #+#             */
/*   Updated: 2023/11/22 21:14:15 by igama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while(s[i])
	{
		i++;
	}
	return(i);
}

char	*ft_strdup(const char *s)
{
	int		i;
	char	*ptr;
	
	i = -1;
	ptr = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ptr)
		return(0);
	while (s[++i])
	{
		ptr[i] = s[i];
	}
	ptr[i] = '\0';
	return(ptr);
}
