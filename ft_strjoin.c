/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuche <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:50:08 by jcuche            #+#    #+#             */
/*   Updated: 2021/10/19 16:56:40 by jcuche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	n_result1(char const *s1, char result)
{
	int	a;

	a = 0;
	while (s1[a] != '\0')
	{
		result[a] = s1[a];
		a++;
	}
	return (result);
}
static char	n_result2(char const *s2, char result, int a)
{
	int	b;

	b = 0;
	while (s2[b] != '\0')
	{
		result[a] = s2[b];
		a++;
		b++;
	}
	result[a] = '\0';
	return (result);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	
} 
