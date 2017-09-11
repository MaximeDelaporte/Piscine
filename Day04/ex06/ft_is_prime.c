/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 20:05:27 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/11 20:19:21 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int i;

	i = 3;
	if (nb < 2)
	{
		return 0;
	}
	if (nb == 2 ) 
{
	return 1;
}
	if (nb % 2 == 0)
{	
	return 0;
}
	while ((i*i) <= nb)
	{
		if (nb % i == 0)
		{
			return(0);
		}
		i+=2;
	}
	return 1;
}

int		main(void)
{	
	printf("%d", ft_is_prime(23));
	return 0;
}
