/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumite@student.42barcelona.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:44:41 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 14:46:24 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	str2[] = "hELLo wORLD";
	char	str3[] = "!!world=hello+4hello";
	char	str4[] = "     hello w o r l d";

	printf("'str1' + strCapitalize => %s\n", ft_strcapitalize(str1));
	printf("'str2' + strCapitalize => %s\n", ft_strcapitalize(str2));
	printf("'str3' + strCapitalize => %s\n", ft_strcapitalize(str3));
	printf("'str4' + strCapitalize => %s\n", ft_strcapitalize(str4));
	return (0);
}
