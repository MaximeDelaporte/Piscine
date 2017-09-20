/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 12:04:18 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/18 16:23:07 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power == 0 || nb == 0)
	{
		return (0);
	}
	if (power > 1)
	{
		return (nb = nb * ft_recursive_power(nb, power - 1));
	}
	return (nb);
}
