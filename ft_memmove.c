/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuche <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:26:47 by jcuche            #+#    #+#             */
/*   Updated: 2021/10/28 12:32:52 by jcuche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*z1;
	unsigned char	*z2;
	size_t			i;

	z1 = (unsigned char *)dst;
	z2 = (unsigned char *)src;
	i = 0;
	if (!z1 && !z2)
		return (NULL);
	if (z2 < z1)
	{
		while (++i <= len)
		{
			z1[len - i] = z2[len - i];
		}
	}
	else
	{
		while (len-- > 0)
		{
			*(z1++) = *(z2++);
		}
	}
	return (dst);
}
