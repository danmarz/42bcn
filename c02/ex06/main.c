/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumite@student.42barcelona.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:40:19 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 14:40:59 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	str1[] = "a\tf";
	char	str2[] = "a\nf";
	char	str3[] = "asdf";
	char	str4[] = "";

	printf("'a\\tf'\tisPrintable => %d\n", ft_str_is_printable(str1));
	printf("'a\\nf'\tisPrintable => %d\n", ft_str_is_printable(str2));
	printf("'asdf'\tisPrintable => %d\n", ft_str_is_printable(str3));
	printf("''\tisPrintable => %d\n", ft_str_is_printable(str4));
	return (0);
}
