/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuche <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:42:40 by jcuche            #+#    #+#             */
/*   Updated: 2021/11/03 13:29:07 by jcuche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	while ((unsigned char)s1[a] == (unsigned char)s2[a]
		&& s1[a] != '\0' && a < n)
		a++;
	if (a == n)
		return (0);
	else
		return ((unsigned char)s1[a] - (unsigned char)s2[a]);
}
