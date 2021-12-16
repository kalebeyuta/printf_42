/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuta-sa <kyuta-sa@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:43:48 by kyuta-sa          #+#    #+#             */
/*   Updated: 2021/10/06 12:46:57 by kyuta-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t range)
{
	unsigned char	*fdestination;
	unsigned char	*fsource;
	size_t			counter;

	counter = 0;
	fdestination = (unsigned char *)destination;
	fsource = (unsigned char *)source;
	if (range <= 0 || destination == source)
		return (destination);
	while (counter < range)
	{
		fdestination[counter] = fsource[counter];
		counter++;
	}
	return (fdestination);
}
