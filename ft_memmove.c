/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuche <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:26:47 by jcuche            #+#    #+#             */
/*   Updated: 2021/10/14 14:00:01 by jcuche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*z1;
	unsigned char	*z2;

	if ((z1 - z2) < 0)
	{
		while (len > 0)
		{
			*z1++ = *z2++;
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			z1[len - 1] = z2[len - 2];
			len--;
		}
	}
	return (dst);
}
