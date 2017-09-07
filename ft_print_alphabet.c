/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 16:24:26 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/07 16:29:37 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar(char a)
{
	    write(1, &a, 1);
}

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

int main (void)
{
	    ft_print_alphabet();
		    return(0);
}
