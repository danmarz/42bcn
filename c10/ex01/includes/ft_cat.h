/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 21:18:00 by ddumitre          #+#    #+#             */
/*   Updated: 2024/12/03 21:44:06 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# define BUFF_SIZE 30000

# include <fcntl.h>
# include <unistd.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <errno.h>
# include <string.h>
# include <libgen.h>

void	missing_args(char **av);
void	ft_putchar(char c, int output);
void	ft_putstr(char *str, int output);
void	ft_putstr_buf(char *str, int size);
int		ft_strlen(char *str);
int		ft_read_file(char *filepath);

#endif
