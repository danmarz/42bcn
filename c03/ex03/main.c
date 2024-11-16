/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumite@student.42barcelona.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 21:50:07 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 21:51:08 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	*src = "Hello world!";
	char	dest[40] = "hi";

	ft_strncat(dest, src, 4);
	printf("dest: %s\n", dest);
	strncat(dest, src, 4);
	printf("dest: %s\n", dest);
	return (0);
}
