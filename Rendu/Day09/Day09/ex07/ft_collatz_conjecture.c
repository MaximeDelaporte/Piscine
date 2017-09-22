/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 08:58:34 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/16 16:01:01 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base != 1)
	{
		if (base % 2 == 0)
			return (ft_collatz_conjecture(base / 2) + 1);
		else
			return (ft_collatz_conjecture(base * 3 + 1) + 1);
	}
	return (0);
}
