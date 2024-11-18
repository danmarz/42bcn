/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumite@student.42barcelona.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 01:11:29 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/17 01:35:25 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	res;

	res = ft_recursive_factorial(5);
	printf("res = %d\n", res);
	return (0);
}
