/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuta-sa <kyuta-sa@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 21:52:21 by kyuta-sa          #+#    #+#             */
/*   Updated: 2021/10/11 21:55:50 by kyuta-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_findstr(char const *str, char c)
{
	int		words;
	int		booleano;

	words = 0;
	booleano = 0;
	while (*str)
	{
		if (*str != c && booleano == 0)
		{
			booleano = 1;
			words++;
		}
		else if (*str == c)
			booleano = 0;
		str++;
	}
	return (words);
}

char	*ft_strndup(const char *s, size_t n)
{
	size_t	counter;
	char	*duplicate;

	counter = 0;
	duplicate = (char *)malloc(sizeof(char) * (n + 1));
	if (duplicate == NULL)
		return (NULL);
	while (s[counter] && counter < n)
	{
		duplicate[counter] = s[counter];
		counter++;
	}
	duplicate[counter] = '\0';
	return (duplicate);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		beggining;
	int		ending;
	char	**str;

	str = (char **)malloc(sizeof(char *) * (ft_findstr(s, c) + 1));
	if (str == NULL)
		return (NULL);
	ending = 0;
	i = 0;
	while (s[ending] != '\0')
	{
		while (s[ending] == c)
			ending++;
		beggining = ending;
		while (s[ending] != '\0' && s[ending] != c)
			ending++;
		if (ending > beggining)
		{
			str[i] = ft_strndup(s + beggining, ending - beggining);
			i++;
		}
	}
	str[i] = NULL;
	return (str);
}
