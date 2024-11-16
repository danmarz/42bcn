/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumite@student.42barcelona.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:30:35 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 14:32:04 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	*str1;
	char	str2[9];

	str1 = "Hello world!";
	printf("%s\n", ft_strncpy(str2, str1, 8));
	printf("%s\n", strncpy(str2, str1, 8));
	return (0);
}
