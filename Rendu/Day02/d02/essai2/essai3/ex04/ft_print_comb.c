/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 11:55:25 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/18 11:57:44 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printing(int i, int j, int k)
{
	if (i < j && j < k)
	{
		ft_putchar('0' + i);
		ft_putchar('0' + j);
		ft_putchar('0' + k);
		if (i != 7)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (i < 10)
	{
		while (j < 10)
		{
			while (k < 10)
			{
				ft_printing(i, j, k);
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
	}
}
