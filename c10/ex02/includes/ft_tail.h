/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 21:18:00 by ddumitre          #+#    #+#             */
/*   Updated: 2024/12/03 23:30:45 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# define BUFF_SIZE 30000

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <errno.h>
# include <string.h>
# include <libgen.h>

int	ft_atoi(char *str);
int	ft_strlen(char *str);
int	ft_strcmp(char *s1, char *s2);

#endif
