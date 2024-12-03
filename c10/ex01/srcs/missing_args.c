/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   missing_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 21:33:39 by ddumitre          #+#    #+#             */
/*   Updated: 2024/12/03 21:44:49 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_cat.h"

void	missing_args(char **av)
{
	char	buf;

	while (read(0, &buf, 1) != 0)
	{
		if (errno == 0)
			ft_putchar(buf, 1);
		else
		{
			ft_putstr(basename(av[0]), 2);
			ft_putstr(": stdin: ", 2);
			ft_putstr(strerror(errno), 2);
			ft_putchar('\n', 2);
			return ;
		}
	}
}
