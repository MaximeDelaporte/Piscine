/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 20:45:56 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/18 15:42:55 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 1 && str[i] <= 47) || str[i] >= 58)
			return (0);
		i++;
	}
	return (1);
}
