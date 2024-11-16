/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumite@student.42barcelona.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:36:45 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 14:37:45 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	str1[] = "asdf";
	char	str2[] = "as4f";
	char	str3[] = "a$df";
	char	str4[] = "";

	printf("'asdf'\tisLower => %d\n", ft_str_is_lowercase(str1));
	printf("'as4f'\tisLower => %d\n", ft_str_is_lowercase(str2));
	printf("'asdF'\tisLower => %d\n", ft_str_is_lowercase(str3));
	printf("''\tisLower => %d\n", ft_str_is_lowercase(str4));
	return (0);
}
