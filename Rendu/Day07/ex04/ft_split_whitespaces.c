/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 04:08:22 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/22 11:59:20 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split_whitespaces(char *str)
{
	int i;
	int	word;
	int nb;
	int *tab;
	char *temp;
	char **string;

	i = 0;
	word = ft_strlen(str);
}
int		ft_strlen(char *str)
{
	int i;
	int j;
	int words;

	i = 0;
	j = 0;
	nb = 0;
	words = 0;
	while (str[i])
	{ 
		if (str[i] == 32 || str[i] == 9 || str[i] == 13)
		{
			tab[nb] = j;
			j = 0;
			words++;
			nb++;
			i++
		}
		else
		{
			i++;
			j++;
		}
	}
	return (j);
}
