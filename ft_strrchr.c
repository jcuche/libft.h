/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuche <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:51:13 by jcuche            #+#    #+#             */
/*   Updated: 2021/10/14 14:03:21 by jcuche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(char *s);
	while (s[i] >= 0)
	{
		if (s[i] == c)
			return (char *s);
		i--;
	}
	return (NULL);
}
