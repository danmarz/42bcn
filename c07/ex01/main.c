/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 23:35:54 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/30 17:53:26 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	min;
	int	max;
	int	*arr;
	int	i;

	min = 3;
	max = 18;
	arr = ft_range(min, max);
	i = 0;
	printf("ft_range(3, 18) = [");
	while (i < (max - min))
	{
		if (i == ((max - min) - 1))
			printf("%d", arr[i]);
		else
			printf("%d, ", arr[i]);
		i++;
	}
	printf("]\n");
	return (0);
}
