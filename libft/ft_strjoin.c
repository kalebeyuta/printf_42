/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuta-sa <kyuta-sa@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 21:01:31 by kyuta-sa          #+#    #+#             */
/*   Updated: 2021/10/07 21:03:59 by kyuta-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		counter;
	int		length1;
	int		length2;
	char	*joined;

	length1 = ft_strlen(s1);
	length2 = ft_strlen(s2);
	joined = (char *)malloc(sizeof(char) * (length1 + length2) + 1);
	if (joined == NULL)
		return (NULL);
	counter = 0;
	while (s1[counter])
	{
		joined[counter] = s1[counter];
		counter++;
	}
	counter = 0;
	while (s2[counter])
	{
		joined[length1 + counter] = s2[counter];
		counter++;
	}
	joined[length1 + counter] = '\0';
	return (joined);
}
