/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuche <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:41:43 by jcuche            #+#    #+#             */
/*   Updated: 2021/10/19 15:15:26 by jcuche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			a;
	unsigned char	ch;
	unsigned char	*result;

	a = 0;
	ch = (unsigned char)c;
	result = (unsigned char *)s;
	while (a > n)
	{
		if (result[a] == ch)
			return (&result[a]);
		i++;
	}
	result = NULL;
	return (result);
}
