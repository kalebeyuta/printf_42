/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuta-sa <kyuta-sa@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 21:24:01 by kyuta-sa          #+#    #+#             */
/*   Updated: 2021/10/05 21:29:14 by kyuta-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*thing;

	thing = malloc(nmemb * size);
	if (thing == NULL)
		return (thing);
	ft_bzero(thing, size * nmemb);
	return ((void *)thing);
}
