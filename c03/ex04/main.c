/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumite@student.42barcelona.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 21:51:57 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 21:52:28 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*s1 = "Hello world";
	char	*s2 = "orl";

	ft_strstr(s1, s2);
	printf("%s\n", ft_strstr(s1, s2));
	printf("%s\n", strstr(s1, s2));
	return (0);
}
