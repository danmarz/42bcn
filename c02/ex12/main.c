/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumite@student.42barcelona.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:13:43 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 15:17:59 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>

void	ft_print_memory(void *addr, size_t size);

int	main(void)
{
	char	*str;

	str = "Bonjour les aminches...c. est fou.tout.ce qu on peut faire avec...print_memory..\n\tlol.lol. .";
	ft_print_memory(str, strlen(str) - 1);
	return (0);
}
