/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 09:02:55 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/10 16:34:21 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int min;
	int max;
	int temp;

	min = 0;
	max = ft_strlen(str) - 1;
	temp = 0;
	while (max > min)
	{
		temp = str[max];
		str[max] = str[min];
		str[min] = temp;
		max--;
		min++;
	}
	return (str);
}
