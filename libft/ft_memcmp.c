/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuta-sa <kyuta-sa@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:38:54 by kyuta-sa          #+#    #+#             */
/*   Updated: 2021/10/06 12:43:24 by kyuta-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t range)
{
	unsigned char	*fs1;
	unsigned char	*fs2;
	size_t			counter;

	fs1 = (unsigned char *)s1;
	fs2 = (unsigned char *)s2;
	counter = 0;
	while (counter < range)
	{
		if (fs1[counter] != fs2[counter])
			return (fs1[counter] - fs2[counter]);
		counter++;
	}
	return (0);
}
