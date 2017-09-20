/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 09:23:37 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/20 09:06:16 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 3;
	if (nb < 2)
		nb = -nb;
	if (nb == 2)
		return (1);
	if (nb > 2147483587)
		return (2);
	if (nb % 2 == 0)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
	{
		ft_is_prime(nb + 1);
		nb++;
	}
	if (ft_is_prime(nb) == 2147483629)
		nb = 2147483647;
	return (nb);
}
