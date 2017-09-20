/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 17:31:47 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/19 17:32:33 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	int				len;

	i = 0;
	j = 0;
	while (src[i])
	{
		i++;
		len = i;
	}
	i = 0;
	while (dest[j] && j < size)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (len + 1);
}
