/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 20:58:24 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/16 15:59:03 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	char	min;
	char	max;
	int		rot;
	int		i;

	min = 33;
	max = 126;
	rot = 42;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] + rot > max)
			str[i] = ((str[i] + rot) - max) + min - 1;
		else
			str[i] = str[i] + rot;
		i++;
	}
	return (str);
}
