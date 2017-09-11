/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 12:04:18 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/11 12:22:00 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	if ( power == 0 || nb == 0)
	{
		return(0);
	}
	if (power > 1)
	{
		return(nb = nb * ft_recursive_power(nb, power - 1));
	}
	return(nb);
}
int main()
{
	printf("%d", ft_recursive_power(3, 8));
	return(0);
}
