/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 19:57:47 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/22 05:11:10 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

char	**ft_sort(int nb, char **argv)
{
	int		i;
	int		j;
	char	*b;

	i = 0;
	j = 1;
	while (i < nb)
	{
		while (j < nb - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				b = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = b;
				j++;
			}
			else
				j++;
		}
		i++;
		j = 0;
	}
	return (argv);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
		return (-1);
	ft_sort(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
