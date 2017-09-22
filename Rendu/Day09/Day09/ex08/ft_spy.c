/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 13:52:20 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/16 16:01:39 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	*ft_rm_blk(char *str)
{
	static char		result[] = "-";
	int				i;
	int				j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == 32)
			i++;
		else
		{
			result[j] = str[i];
			i++;
			j++;
		}
	}
	return (result);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	while (i < argc - 1)
	{
		if ((ft_strcmp(ft_rm_blk(argv[i + 1]), "president") == 0)
				|| (ft_strcmp(ft_rm_blk(argv[i + 1]), "kill") == 0)
				|| (ft_strcmp(ft_rm_blk(argv[i + 1]), "Bauer") == 0))
		{
			ft_putstr("Alert!!!\n");
		}
		i++;
	}
	return (0);
}
