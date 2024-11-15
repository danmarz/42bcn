/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumite@student.42barcelona.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:07:30 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/15 22:47:27 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_comb(int comb[], int n, int last)
{
	int	i;

	i = 0;
	while (i < n)
		write(1, &"0123456789"[comb[i++]], 1);
	if (!last)
		write(1, ", ", 2);
}

// Helper function that handles the logic for updating the combination
int	ft_update_comb(int comb[], int n)
{
	int	i;
	int	last;

	i = n - 1;
	while (i >= 0 && comb[i] == 9 - (n - 1 - i))
		i--;
	if (i < 0)
		return (1);
	comb[i]++;
	while (++i < n)
		comb[i] = comb[i - 1] + 1;
	last = (comb[0] == 10 - n);
	return (last);
}

// Simplified print_combn function to keep it under 25 lines
void	ft_print_combn(int n)
{
	int	comb[10];
	int	i;
	int	last;

	i = 0;
	while (i < n)
	{
		comb[i] = i;
		i++;
	}
	last = 0;
	while (!last)
	{
		ft_put_comb(comb, n, last);
		last = ft_update_comb(comb, n);
	}
}
