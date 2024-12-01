/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 22:51:11 by ddumitre          #+#    #+#             */
/*   Updated: 2024/12/01 01:02:50 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*result;
	char	*strs[] = {"Hello", "World", "How", "Are", "You", "Doing"};

	result = ft_strjoin(6, strs, "|");
	printf("%s\n", result);
	free(result);
	return (0);
}
