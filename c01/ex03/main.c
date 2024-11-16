/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumite@student.42barcelona.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 01:04:26 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 01:07:12 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 11;
	b = 3;
	div = 0;
	mod = 0;
	printf("Init -> a = %i, b = %i, div = %i, mod = %i\n", a, b, div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("After -> a = %i, b = %i, div = %i, mod = %i\n", a, b, div, mod);
	return (0);
}
