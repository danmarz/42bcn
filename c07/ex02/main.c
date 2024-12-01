/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 21:02:22 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/30 22:50:24 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	size;
	int	i;

	min = 5;
	max = 18;
	size = ft_ultimate_range(&range, min, max);
	i = 0;
	printf("Size of range is: %d\n", size);
	printf("ft_ultimate_range(range, 3, 18) = [");
	while (i < (max - min))
	{
		if (i == ((max - min) - 1))
			printf("%d", range[i]);
		else
			printf("%d, ", range[i]);
		i++;
	}
	printf("]\n");
	return (0);
}
