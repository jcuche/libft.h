/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuche <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:18:03 by jcuche            #+#    #+#             */
/*   Updated: 2021/10/27 11:29:01 by jcuche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *restdst, const void *restsrc, size_t n)
{
	size_t			a;
	unsigned char	*z1;
	unsigned char	*z2;

	a = 0;
	z1 = (unsigned char *) restdst;
	z2 = (unsigned char *) restsrc;
	if (restdst == NULL && restsrc == NULL)
		return (NULL);
	while (a < n)
	{
		z1[a] = z2[a];
		a++;
	}
	return (restdst);
}
