/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 21:29:34 by ddumitre          #+#    #+#             */
/*   Updated: 2024/12/03 21:50:07 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_cat.h"

int	ft_read_file(char *filepath)
{
	int			file;
	ssize_t		size;
	char		buf[BUFF_SIZE];

	file = open(filepath, O_RDWR);
	if (file != -1)
	{
		size = read(file, buf, BUFF_SIZE);
		while ((int)size != 0)
		{
			ft_putstr_buf(buf, (int)size);
			size = read(file, buf, BUFF_SIZE);
		}
		return (1);
	}
	else
		return (0);
}
