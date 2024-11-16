/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumite@student.42barcelona.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:02:47 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 14:08:01 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*src;
	char	dest[13];

	src = "Hello world!";
	printf("src: %s\nft_strcpy(dest, src): %s\ndest: %s\n", src,
		ft_strcpy(dest, src), dest);
	return (0);
}
