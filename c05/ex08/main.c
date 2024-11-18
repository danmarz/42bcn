/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumite@student.42barcelona.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 00:31:07 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/19 00:35:05 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_ten_queens_puzzle(void);

int	main(void)
{
	printf("Total solutions: %d\n", ft_ten_queens_puzzle());
	return (0);
}
