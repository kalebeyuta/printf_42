/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuta-sa <kyuta-sa@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:16:02 by kyuta-sa          #+#    #+#             */
/*   Updated: 2021/10/08 19:18:34 by kyuta-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ft_strnlen(int n)
{
	int		cont;

	cont = 0;
	if (n <= 0)
		cont = 1;
	while (n)
	{
		cont++;
		n = n / 10;
	}
	return (cont);
}

char	*ft_itoa(int n)
{
	char				*string;
	long int			len;
	unsigned int		number;

	len = ft_strnlen(n);
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (!(string))
		return (NULL);
	string[len--] = '\0';
	if (n == 0)
		string[0] = '0';
	if (n < 0)
	{
		number = n * -1;
		string[0] = '-';
	}
	else
		number = n;
	while (number > 0)
	{
		string[len] = 48 + (number % 10);
		number = number / 10;
		len--;
	}
	return (string);
}
