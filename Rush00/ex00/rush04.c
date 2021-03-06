/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 15:42:48 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/11 16:41:35 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	horizontal(int vert, int hor, int y, int x)
{
	if ((vert == 0 && hor == 0) || (vert == y - 1 && hor == x - 1))
	{
		ft_putchar('A');
	}
	else if ((hor == 0 && vert == y - 1) || (hor == x - 1 && vert == 0))
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	inception(int vert, int hor, int y, int x)
{
	if (hor == 0 || hor == x - 1)
	{
		horizontal(vert, hor, y, x);
	}
	else if ((hor > 0 && hor < x - 1) && (vert > 0 && vert < y - 1))
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('B');
	}
}

void	rush(int y, int x)
{
	int hor;
	int vert;

	hor = 0;
	while (hor < x)
	{
		vert = 0;
		while (vert < y)
		{
			inception(vert, hor, y, x);
			vert++;
		}
		ft_putchar('\n');
		hor++;
	}
}
