/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumite@student.42barcelona.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:38:28 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 14:39:16 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	str1[] = "asdf";
	char	str2[] = "ASDF";
	char	str3[] = "a$4f";
	char	str4[] = "";

	printf("'asdf'\tisUpper => %d\n", ft_str_is_uppercase(str1));
	printf("'ASDF'\tisUpper => %d\n", ft_str_is_uppercase(str2));
	printf("'a$4f'\tisUpper => %d\n", ft_str_is_uppercase(str3));
	printf("''\tisUpper => %d\n", ft_str_is_uppercase(str4));
	return (0);
}
