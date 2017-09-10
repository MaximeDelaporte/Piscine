/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 20:37:46 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/09 16:36:40 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_printing(void)
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
				ft_printing();
				k++;
			}
			k = 0;
			j++;
		}
		j = 0;
		i++;
	}
}
