/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuta-sa <kyuta-sa@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 21:07:47 by kyuta-sa          #+#    #+#             */
/*   Updated: 2021/10/20 15:15:28 by kyuta-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{	
	size_t	destlen;
	size_t	d;
	size_t	s;

	destlen = ft_strlen(dest);
	d = destlen;
	s = 0;
	if (destlen >= size)
		return (size + ft_strlen(src));
	while (size > d + 1 && src[s] != '\0')
		dest[d++] = src[s++];
	if (d == size)
		dest[d] = '\0';
	dest[d] = '\0';
	return (destlen + ft_strlen(src));
}
