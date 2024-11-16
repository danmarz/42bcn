/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumite@student.42barcelona.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 21:54:14 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 22:04:01 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			str0[50];
	char			str1[50];
	char			*str2;
	unsigned int	size0;
	unsigned int	size1;

	str0[0] = 'H';
	str0[1] = 'i';
	str0[2] = '!';
	str0[3] = '\0';
	str1[0] = 'H';
	str1[1] = 'i';
	str1[2] = '!';
	str1[3] = '\0';
	str2 = "Concat test";
	size0 = ft_strlcat(str0, str2, 8);
	size1 = strlcat(str1, str2, 8);
	printf("String final: %s, Size: %d", str0, size0);
	printf("\nString final: %s, Size: %d", str1, size1);
}
