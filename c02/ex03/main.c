/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumite@student.42barcelona.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:35:20 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 14:36:06 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	str1[] = "1234";
	char	str2[] = "1s4f";
	char	str3[] = "asdf";
	char	str4[] = "";

	printf("'1234'\tisNumeric => %d\n", ft_str_is_numeric(str1));
	printf("'1s4f'\tisNumeric => %d\n", ft_str_is_numeric(str2));
	printf("'asdf'\tisNumeric => %d\n", ft_str_is_numeric(str3));
	printf("''\tisNumeric => %d\n", ft_str_is_numeric(str4));
	return (0);
}
