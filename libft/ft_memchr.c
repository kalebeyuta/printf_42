/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuta-sa <kyuta-sa@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:34:31 by kyuta-sa          #+#    #+#             */
/*   Updated: 2021/10/06 12:38:09 by kyuta-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *thing, int character, size_t range)
{
	unsigned char	*fthing;
	size_t			counter;

	counter = 0;
	fthing = (unsigned char *)thing;
	while (range--)
	{
		if (fthing[counter] == (unsigned char )character)
			return ((char *)fthing + counter);
		counter++;
	}
	return (NULL);
}
