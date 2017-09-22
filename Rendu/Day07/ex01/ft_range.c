/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 13:03:40 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/20 15:18:07 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	tab = malloc((max - min) * sizeof(int));
	if (min >= max)
		return (0);
	while (min + i != max)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
