/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 16:08:02 by ddumitre          #+#    #+#             */
/*   Updated: 2024/12/01 16:51:32 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

	arr = ft_strs_to_tab(ac, av);
	i = 0;
	while (i < ac)
	{
		printf("arr[%d].size = %d\n", i, arr[i].size);
		printf("arr[%d].str = %s\n", i, arr[i].str);
		printf("arr[%d].copy = %s\n", i, arr[i].copy);
		i++;
	}
	return (0);
}
