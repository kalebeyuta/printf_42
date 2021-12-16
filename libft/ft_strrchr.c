/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuta-sa <kyuta-sa@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 21:21:58 by kyuta-sa          #+#    #+#             */
/*   Updated: 2021/10/07 21:23:19 by kyuta-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*find;
	char	*result;
	char	fch;
	int		counter;

	result = NULL;
	counter = 0;
	find = (char *)str;
	fch = (char )ch;
	if (fch == '\0')
		return (find + ft_strlen(find));
	while (find[counter])
	{
		if (find[counter] == fch)
			result = &find[counter];
		counter++;
	}
	return (result);
}
