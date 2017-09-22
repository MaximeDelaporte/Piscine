/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 13:58:43 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/21 18:15:44 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	
	i = 0;
	range = (int**)malloc (sizeof(int*));
	range[i] = (int*)malloc((max - min) * sizeof(int));
	if (min >= max)
		return(0);
	while (min + i < max)
	{
		range[0][i] = min + i;
		i++;
	}
	return (i);
}
