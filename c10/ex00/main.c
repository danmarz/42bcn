/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:30:58 by ddumitre          #+#    #+#             */
/*   Updated: 2024/12/03 20:34:59 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

void	ft_putstr(char *str);

void	ft_display_file(const char *file_path)
{
	int		fd;
	ssize_t	bytes_read;
	char	buffer[BUFFER_SIZE];

	fd = open(file_path, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot open file.\n", 18);
		return ;
	}
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	if (bytes_read == -1)
		write(2, "Cannot read file.\n", 18);
	close(fd);
}

int	main(int ac, char *av[])
{
	if (ac < 2)
		ft_putstr("File name missing.\n");
	else if (ac > 2)
		ft_putstr("Too many arguments.\n");
	else
		ft_display_file(av[1]);
	return (0);
}
