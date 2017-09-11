/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 14:55:20 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/11 18:41:20 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_sqrt(int nb)
{
	int i;
	int res;

	i = 1;
	res = 0;
	while (res <= nb)
	{
		res = i * i;
		if (res == nb)
		{
			return(i);
		}
		else
		{
			i++;
		}
	}
	if (res > nb)
	{
		return(0);
	}
	return(i);
}

int main(void)
{
	printf("%d", ft_sqrt(100000000));
}
