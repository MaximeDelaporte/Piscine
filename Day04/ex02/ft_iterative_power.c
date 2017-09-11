/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 10:46:35 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/11 12:03:02 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (nb == 0 || power <= 0)
		return(0);
	while ( power != 0)
	{
		result *= nb;
		power--;
	}
	return(result);
}

int main(void)
{
	printf("%d", ft_iterative_power(3, 8));
	return(0);
}
