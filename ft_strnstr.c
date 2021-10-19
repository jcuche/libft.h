/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuche <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:16:34 by jcuche            #+#    #+#             */
/*   Updated: 2021/10/14 14:02:59 by jcuche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;
	char	*result;

	result = (char *) hazstack;
	b = 0;
	if (ft_strlen(needle) == 0)
		return (result);
	while (result[b] != '\0' && len >= ft_strlen(needle))
	{
		a = 0;
		while (result[b + a] == needle[a]
			&& result[b + a] != '\0' && needle[a] != '\0')
			i++;
		if (needle[i] == '\0')
			return (&result[b]);
		b++;
		len--;
	}
	return (NULL);
}
