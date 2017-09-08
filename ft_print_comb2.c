/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 10:06:08 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/08 11:17:25 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;

	while (i <10)
	{
		while ( j < 10)
		{	
			while ( k < 10)
			{
				while ( l < 10)
				{{
				   if	(i<= k && j<l)
						{	
							ft_putchar('0' + i);
							ft_putchar('0' + j);
							ft_putchar(' ');
							ft_putchar('0' + k);
							ft_putchar('0' + l);

							if ( i != 9 || j != 8)
							{	
								ft_putchar(',');
								ft_putchar(' ');
							}	
						}
					}	   
					l++;
				}
				k++;
				l =0;
			}
			j++;
			k =0;
		}
		i++;
		j = 0;
	}
}
int main (void)
{
	ft_print_comb2();
	return(0);
}
