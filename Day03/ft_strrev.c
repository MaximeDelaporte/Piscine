/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 09:02:55 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/09 10:56:40 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
}


char *ft_strrev(char *str)
{
	int i;
	int inverse;
	i = 0;
	inverse = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	while (i > 0 && inverse <= i)
	{
		ft_putchar(str[i - inverse]);
		inverse++;	
	}
}
int main (void)
{
	ft_putstr(ft_strrev("Salut"));
	return(0);
}
