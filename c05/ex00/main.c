/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumite@student.42barcelona.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 00:35:08 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/17 01:24:59 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	res;

	res = ft_iterative_factorial(5);
	printf("res = %d\n", res);
	return (0);
}
