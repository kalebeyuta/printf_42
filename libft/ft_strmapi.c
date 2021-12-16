/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuta-sa <kyuta-sa@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 21:11:42 by kyuta-sa          #+#    #+#             */
/*   Updated: 2021/10/07 21:13:46 by kyuta-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		counter;
	char	*string;
	int		length;

	while (s == NULL)
		break ;
	counter = 0;
	length = ft_strlen(s);
	string = (char *)malloc(sizeof(char) * (length + 1));
	while (counter < length)
	{
		string[counter] = f(counter, s[counter]);
		counter++;
	}
	string[counter] = '\0';
	return (string);
}
