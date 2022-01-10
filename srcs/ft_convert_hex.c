
#include "../include/ft_printf.h"

int	ft_convert_hex(unsigned long long int n, int pxx)
{
	int			size;
	static char	*str;

/*	contar a quantidade de caracteres de nosso hexadecimal */
	size = ft_hexlen(n);
/*	realizar uma alocacao limpa para nossa string */
	str = ft_callo(sizeof(char), (size + 1));
	if (n == 0)
		str[size - 1] = '0';
/*	converte nosso hexadecimal em char para poder escreve-lo */
	ft_itoh(str, size - 1, n, pxx);
/*	caso nosso argumento seja %p */
	if (pxx == 0)
	{
/*	caso nao exista conteudo em nossa string escreva "0x0" */
		if (str[size - 1] == '0' && size - 1 == 0)
			ft_printf("%s", "0x0");
/*	caso exista conteudo em nossa string, escreveremos "0x" e em seguida nossa string */
		else
			ft_printf("0x%s", str);
	}
/*	caso nosso argumento seja %x ou %X, escreveremos nossa string */
	else
		ft_printf("%s", str);
	free(str);
	str = NULL;
	return (size);
}

int	ft_hexlen(unsigned long n)
{
	int	size;

	size = 1;
	while (n >= 16)
	{
		size++;
		n = n / 16;
	}
	return (size);
}


static char	ft_hex_to_char(unsigned long long int n, int pxx)
{
	if (n < 10)
/*	converter para char */
		return (n + 48);
	if (n >= 10)
	{
/*	caso %p ou %x */
		if (pxx == 0 || pxx == 1)
/*	converter para letra minuscula */
			return (n + 87);
/*	caso %X */
		else
/*	converter para letra maiuscula */
			return (n + 55);
	}
	return (0);
}

char	*ft_itoh(char *str, int size, unsigned long int n, int pxx)
{
	unsigned long int	div;

	div = 0;
	while (n != 0)
	{
/*	seleciona os caracteres que serao convertidos */
		div = n % 16;
		str[size--] = ft_hex_to_char(div, pxx);
/*	busca os proximos caracteres que serao convertidos */
		n = n / 16;
	}
	return (str);
}