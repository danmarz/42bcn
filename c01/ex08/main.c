/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumite@student.42barcelona.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 01:35:58 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 01:42:30 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int		arr[4];
	int		i;
	size_t	size;

	arr[0] = 5;
	arr[1] = 9;
	arr[2] = 1;
	arr[3] = 4;
	size = sizeof(arr) / sizeof(arr[0]);
	i = 0;
	while (i < (int)size)
		printf("%d ", arr[i++]);
	printf("\n");
	ft_sort_int_tab(arr, size);
	i = 0;
	while (i < (int)size)
		printf("%d ", arr[i++]);
	return (0);
}
