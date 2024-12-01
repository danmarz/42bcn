/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 22:38:31 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/29 23:19:47 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	str1[] = "Hello world";
	char	*str2 = NULL;
	// sizeof(str) == string + NULL char	
	printf("sizeof(str1) = %lu\n", sizeof(str1));
	// sizeof(ptr) == 8 (or whatever arch block size)
	printf("sizeof(str2) = %lu\n", sizeof(str2));
	// strlen(str) == number of chars only
	printf("strlen(str1) = %lu\n", strlen(str1));
	// calling strlen(str2) at this point would output undefined (garbage) data
	if (str2)
		printf("strlen(str2) = %lu\n", strlen(str2));
	else
		printf("str2 is not initialized yet.\n");
	str2 = ft_strdup(str1);
	printf("str2 = %s\n", str2);
	printf("sizeof(str1) = %lu\n", sizeof(str1));
	printf("sizeof(str2) = %lu\n", sizeof(str2));
	printf("strlen(str1) = %lu\n", strlen(str1));
	printf("strlen(str2) = %lu\n", strlen(str2));
	return (0);
}
