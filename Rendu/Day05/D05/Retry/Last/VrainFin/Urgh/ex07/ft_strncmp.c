/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 17:18:43 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/21 12:19:19 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned	int i;

	i = 0;
	if (s1 == 0 || n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
