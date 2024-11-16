/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumite@student.42barcelona.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 01:08:10 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 01:09:22 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 8;
	b = 0;
	printf("int a -> %d, int b -> %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("int a -> %d, int b -> %d\n", a, b);
}
