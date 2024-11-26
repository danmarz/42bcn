/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:15:57 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/07 14:21:52 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char *av[])
{
	(void)ac;
	while (*av[0])
	{
		ft_putchar(*av[0]);
		av[0]++;
	}
	ft_putchar('\n');
	return (0);
}
