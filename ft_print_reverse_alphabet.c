/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 16:30:56 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/07 16:43:55 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

void ft_print_reverse_alphabet(void)
{
	int i;
	i =0;
	while (i<26)
	{
		ft_putchar('z'-i);
		i++;
	}
}

int main (void)
{
	ft_print_reverse_alphabet();
	return(0);
}
