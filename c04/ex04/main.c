/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumite@student.42barcelona.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 21:04:45 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 21:25:44 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	char			*base;
	unsigned long	c;

	base = "01";
	c = 0;
	while (c < 10)
	{
		printf("c = %lu ", c);
		ft_putnbr_base(c, base);
		printf("\n ");
		c++;
	}
	printf("\n");
	ft_putnbr_base(-1, base);
	printf("\n");
}
