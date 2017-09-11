/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 12:39:35 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/11 14:37:01 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{
	if (index < 0)
	{
		return(-1);
	}
	if(index == 0)
	{
		return(0);
	}
	if (index == 1)
	{
		return(1);
	}
	return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}

int main(void)
{
	printf("%d", ft_fibonacci(5));
}
