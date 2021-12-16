/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuta-sa <kyuta-sa@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:36:20 by kyuta-sa          #+#    #+#             */
/*   Updated: 2021/10/07 19:06:26 by kyuta-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t length)
{
	char		*fdestination;
	const char	*fsource;
	size_t		counter;
	char		*finaldestination;
	const char	*finalsource;

	fdestination = destination;
	fsource = source;
	counter = 0;
	finaldestination = fdestination + (length - 1);
	finalsource = fsource + (length - 1);
	if (fdestination == fsource)
		return (fdestination);
	if (fdestination < fsource)
	{
		while (counter < length)
		{
			fdestination[counter] = fsource[counter];
			counter++;
		}
	}
	else
		while (length--)
			*finaldestination-- = *finalsource--;
	return (fdestination);
}
