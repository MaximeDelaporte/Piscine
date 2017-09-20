/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 10:46:35 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/18 16:21:31 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (nb == 0 || power <= 0)
		return (0);
	while (power != 0)
		if (power == 1)
			return (nb);
		else
		{
			result *= nb;
			power--;
		}
	return (result);
}
