/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:57:34 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/07 15:32:05 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s)
	{
		ft_putchar(*s);
		s++;
	}
}

int	main(int ac, char *av[])
{
	int	i;

	i = ac;
	while (i > 1)
	{
		ft_putstr(av[i - 1]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
