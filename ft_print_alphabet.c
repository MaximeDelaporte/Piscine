/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 16:24:26 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/07 19:27:01 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int  ft_putchar(char c);

void ft_print_alphabet(void)
{
	int i;
	i =0;
	while (i<26)
		{
			ft_putchar('a'+i);
			i++;
		}
}
