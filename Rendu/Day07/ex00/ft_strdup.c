/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 18:22:04 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/21 15:09:06 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(const char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}


char	*ft_strdup(const char *s)
{
	char *d;
	int lenght;
	int i;
	
	i = 0;
	lenght = ft_strlen(s) + 1;
	if(!(d = malloc(lenght+ 1)))
		return(0);
	while ( i < lenght)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = 0;
	return (d);
}

int		main()
{
	char test[10] = "test";
	ft_strdup(test);
	return (0);
}
