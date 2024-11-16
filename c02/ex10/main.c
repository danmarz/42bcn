/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumite@student.42barcelona.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:47:14 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 14:54:22 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			str1[20] = "Hello ";
	char			str2[20] = "worlds!";
	unsigned int	i;

	i = ft_strlcpy(str1, str2, 5);
	printf("ft_strlcpy() ran, str1 is now: '%s'.\n\tStr2 len was: %u\n",
		str1, i);
	i = strlcpy(str1, str2, 5);
	printf("strlcpy() ran, str1 is now: '%s'.\n\tStr2 len was: %u\n",
		str1, i);
	return (0);
}
