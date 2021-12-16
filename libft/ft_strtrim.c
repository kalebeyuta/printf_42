/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuta-sa <kyuta-sa@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:49:53 by kyuta-sa          #+#    #+#             */
/*   Updated: 2021/10/08 19:50:36 by kyuta-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_verification(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	length;

	start = 0;
	while (s1[start] && ft_verification (s1[start], set))
		start ++;
	length = ft_strlen(s1);
	while (length > start && ft_verification (s1[length - 1 ], set))
		length--;
	str = (char *) malloc (sizeof(*s1) * (length - start + 1));
	i = 0 ;
	while (start < length)
		str[i ++] = s1[start ++];
	str[i] = 0 ;
	return (str);
}
