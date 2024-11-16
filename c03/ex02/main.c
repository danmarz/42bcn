/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumite@student.42barcelona.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 21:48:10 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 21:49:27 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	*src = "Hello world!";
	char	dest[40] = "hi";

	ft_strcat(dest, src);
	printf("dest: %s\n", dest);
	strcat(dest, src);
	printf("dest: %s\n", dest);
	return (0);
}
