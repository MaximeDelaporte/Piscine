/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 20:37:46 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/08 10:00:10 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i=0;
	j=0;
	k=0;

	while (i<10)
	{
		while (j<10)
		{
			while (k<10)
			{
				if(i<j && j<k)
				{
					ft_putchar('0' + i);
					ft_putchar('0' + j);
					ft_putchar('0' + k);
					if (i!=7)
					{
						ft_putchar(',');
						ft_putchar(' ');
					}
				}
				k++;
			}
			k=0;
			j++;
		}
		j=0;
		i++;
	}
}
int  main (void)
{
	ft_print_comb();
	return(0);
}

