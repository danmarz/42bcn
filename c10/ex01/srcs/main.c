/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 20:35:26 by ddumitre          #+#    #+#             */
/*   Updated: 2024/12/03 22:16:11 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_cat.h"

int	main(int ac, char **av)
{
	int	i;
	int	res;

	if (ac == 1)
		missing_args(av);
	else
	{
		i = 0;
		while (++i < ac)
		{
			res = ft_read_file(av[i]);
			if (res == 0)
			{
				ft_putstr(basename(av[0]), 2);
				ft_putstr(": ", 2);
				ft_putstr(av[i], 2);
				ft_putstr(": ", 2);
				ft_putstr(strerror(errno), 2);
				ft_putchar('\n', 2);
			}
		}
	}
}
