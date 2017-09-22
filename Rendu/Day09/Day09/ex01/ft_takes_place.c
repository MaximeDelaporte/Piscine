/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madelapo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 17:48:25 by madelapo          #+#    #+#             */
/*   Updated: 2017/09/15 18:45:52 by madelapo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_exceptions(int hour)
{
	if (hour == 23)
	{
		printf("%s", "THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%s", "11 PM AND 12 AM");
	}
	else if (hour == 12)
	{
		printf("%s", "THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%s", "12 PM AND 1 PM");
	}
	else if (hour == 24 || hour == 0)
	{
		printf("%s", "THE FOLLOWING TAKES PLACE BETWEEN ");
		printf("%s", "12 AM AND 1 AM");
	}
	else if (hour == 11)
	{
		printf("%s", "THE FOLLOWING TAKES PLACE BETWEET ");
		printf("%s", "11 AM AND 12 PM");
	}
}

void	ft_takes_place(int hour)
{
	if (hour <= 24)
	{
		if (hour < 12 && hour != 0)
		{
			printf("%s", "THE FOLLOWING TAKES PLACE BETWEEN ");
			printf("%d", hour);
			printf("%s", " AM AND ");
			printf("%d", hour + 1);
			printf("%s", " AM");
		}
		else if (hour > 11 && hour < 23)
		{
			hour = hour - 12;
			printf("%s", "THE FOLLOWING TAKES PLACE BETWEEN ");
			printf("%d", hour);
			printf("%s", " PM AND ");
			printf("%d", hour + 1);
			printf("%s", " PM");
		}
		else if (hour > 24)
			printf("%s", "Entrez une heure entre 0 et 24");
		else
			ft_exceptions(hour);
	}
}
