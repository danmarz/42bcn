/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumite@student.42barcelona.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 01:18:40 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 01:33:28 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	arr[4];
	int	size;
	int	i;

	arr[0] = 8;
	arr[1] = 9;
	arr[2] = 12;
	arr[3] = 15;
	size = sizeof(arr) / sizeof(arr[0]);
	i = 0;
	printf("Array elements: ");
	while (i < size)
		printf("%d ", arr[i++]);
	printf("\n");
	ft_rev_int_tab(arr, size);
	printf("Array elements after re-arrange: ");
	i = 0;
	while (i < size)
		printf("%d ", arr[i++]);
	printf("\n");
	return (0);
}
