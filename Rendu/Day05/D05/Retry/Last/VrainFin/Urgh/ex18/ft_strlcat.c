/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 16:29:22 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/21 10:11:08 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *len)
{
	int i;

	i = 0;
	while (len[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	i = 0;
	j = 0;
	len = ft_strlen(dest) + ft_strlen(src);
	while (dest[i])
		i++;
	while (src[j] && i < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
