/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 20:40:29 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/11 14:53:04 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{ 
	int fact;
	int neg;

	fact = nb;
	if (nb < 0)
	{
		nb = -nb;
	}
	if (nb == 0 || nb == 1)
	return(1);
	if (nb > 12)
		return(0);
	while ( nb > 1)
	{
		nb = nb -1;
		fact = fact * nb;
	}
	return(fact);
}
