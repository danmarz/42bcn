/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumite@student.42barcelona.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:41:54 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 14:42:32 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str1[] = "asdf";
	char	str2[] = "as4f";
	char	str3[] = "a$df";
	char	str4[] = "";

	printf("'asdf'\ttoUpper => %s\n", ft_strupcase(str1));
	printf("'as4f'\ttoUpper => %s\n", ft_strupcase(str2));
	printf("'a$df'\ttoUpper => %s\n", ft_strupcase(str3));
	printf("''\ttoUpper => %s\n", ft_strupcase(str4));
	return (0);
}
