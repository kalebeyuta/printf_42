/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuta-sa <kyuta-sa@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:47:25 by kyuta-sa          #+#    #+#             */
/*   Updated: 2021/10/07 20:42:12 by kyuta-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	length;
	size_t	counter;
	char	*duplicate;

	length = ft_strlen(s);
	counter = 0;
	duplicate = (char *)malloc(sizeof(char) * (length + 1));
	if (duplicate == NULL)
		return (NULL);
	while (s[counter])
	{
		duplicate[counter] = s[counter];
		counter++;
	}
	duplicate[counter] = '\0';
	return (duplicate);
}
