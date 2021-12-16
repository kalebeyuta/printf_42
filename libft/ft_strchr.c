/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuta-sa <kyuta-sa@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:44:12 by kyuta-sa          #+#    #+#             */
/*   Updated: 2021/10/07 19:45:27 by kyuta-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int		counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] == (char )ch)
			return ((char *)str + counter);
		counter++;
	}
	if (str[counter] == (char )ch)
		return ((char *)str + counter);
	return (NULL);
}
