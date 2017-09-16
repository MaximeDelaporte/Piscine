/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 20:14:28 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/16 20:53:18 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *len)
{
	int i;

	i = 0;
	while(len[i])
			i++;
	return(i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 0;	
	len = ft_strlen(dest) + ft_strlen(src);

	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return(len);
}

int main()
{
	char dest[50] ="J'aime la b";
	char src[] ="aguette";
	printf("%u", ft_strlcat(dest, src, 30));
	return(0);
}
