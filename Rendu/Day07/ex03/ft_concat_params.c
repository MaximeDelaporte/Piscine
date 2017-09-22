/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 09:22:34 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/22 02:22:31 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
int		ft_strlen( char *argv)
{
	int i;

	i = 0;
	while (argv[i])
		i++;
	return (i);
}
char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	dest[j] = '\n';
	j++;
	while (src[i])
		{
			dest[j] = src[i];
			i++;
			j++;
		}
	dest[j] = '\0';
	return(dest);
}

char *ft_concat_params(int argc, char **argv)
{
	int i;
	int length;
	char *str;

	str = NULL;
	i = 1;
	length = 0;
	while (i < argc)
	{	
		length += ft_strlen(argv[i]);
		i++;
	}
	str = (char*)malloc (sizeof(char) * length + 1);
	i = 1;
	while ( i + 1 < argc)
	{
		str = ft_strcat(argv[1], argv[1 + i]);
		i++;
	}
	return (str);
}

int main(int argc, char **argv)
{
	printf("%s", ft_concat_params(argc, argv));
	return(0);
}
