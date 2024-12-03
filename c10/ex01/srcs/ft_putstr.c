/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 21:27:28 by ddumitre          #+#    #+#             */
/*   Updated: 2024/12/03 22:16:30 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_cat.h"

void	ft_putstr(char *str, int output)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i), output);
		i++;
	}
}

void	ft_putstr_buf(char *str, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		ft_putchar(str[i], 1);
}
