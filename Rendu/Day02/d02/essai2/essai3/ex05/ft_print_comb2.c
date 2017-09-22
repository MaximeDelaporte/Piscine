/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 10:06:08 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/13 12:30:44 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_nb(int i, int j, int k, int l)
{
	if ((i * 10) + j < (k * 10) + l)
	{
		ft_putchar('0' + i);
		ft_putchar('0' + j);
		ft_putchar(' ');
		ft_putchar('0' + k);
		ft_putchar('0' + l);
		if (i != 9 || j != 8)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_init(int i, int j, int k, int l)
{
	while (i <= 9)
	{
		while (j <= 9)
		{
			while (k <= 9)
			{
				while (l <= 9)
				{
					ft_print_nb(i, j, k, l);
					l++;
				}
				k++;
				l = 0;
			}
			j++;
			k = 0;
		}
		i++;
		j = 0;
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	ft_init(i, j, k, l);
}
