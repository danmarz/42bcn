/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:01:31 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 01:19:46 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp_tab;

	i = 0;
	while (i < (size / 2))
	{
		temp_tab = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp_tab;
		i++;
	}
}
