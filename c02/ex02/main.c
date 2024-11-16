/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumite@student.42barcelona.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:33:38 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 14:34:24 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	str1[] = "asdf";
	char	str2[] = "as4f";
	char	str3[] = "a$df";
	char	str4[] = "";

	printf("'asdf'\tisAlpha => %d\n", ft_str_is_alpha(str1));
	printf("'as4f'\tisAlpha => %d\n", ft_str_is_alpha(str2));
	printf("'a$df'\tisAlpha => %d\n", ft_str_is_alpha(str3));
	printf("''\tisAlpha => %d\n", ft_str_is_alpha(str4));
	return (0);
}
