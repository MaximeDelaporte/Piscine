/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/08 20:04:28 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/09 14:26:21 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putstr(char *str);
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++
	};
}