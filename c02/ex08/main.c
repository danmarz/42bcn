/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumite@student.42barcelona.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:43:17 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 14:44:06 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str1[] = "ASDF";
	char	str2[] = "AS4F";
	char	str3[] = "a$dF";
	char	str4[] = "";

	printf("'ASDF'\ttoLower => %s\n", ft_strlowcase(str1));
	printf("'AS4F'\ttoLower => %s\n", ft_strlowcase(str2));
	printf("'a$dF'\ttoLower => %s\n", ft_strlowcase(str3));
	printf("''\ttoLower => %s\n", ft_strlowcase(str4));
	return (0);
}
