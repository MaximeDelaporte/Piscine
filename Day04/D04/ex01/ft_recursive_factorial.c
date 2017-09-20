/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 10:27:45 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/18 16:17:35 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
	{
		return (0);
	}
	if (nb > 1)
	{
		return (nb = nb * ft_recursive_factorial(nb - 1));
	}
	return (nb);
}
