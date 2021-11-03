/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuche <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:24:19 by jcuche            #+#    #+#             */
/*   Updated: 2021/10/27 12:46:03 by jcuche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		size;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	size = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (i < size && ft_strchr(set, s1[size]))
		size--;
	str = ft_substr(s1, i, size - i + 1);
	return (str);
}
