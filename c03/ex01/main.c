/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumite@student.42barcelona.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 21:45:26 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 21:47:27 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "Hello world!";
	str2 = "Hello worlD";
	printf("%d\n", ft_strncmp(str1, str2, 11));
	printf("%d\n", strncmp(str1, str2, 11));
	return (0);
}
