/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 01:12:52 by ddumitre          #+#    #+#             */
/*   Updated: 2024/12/03 01:14:37 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str, char *charset);

int	main(void)
{
	char **result = ft_split("Hello, world! How are you?", ", !");
    for (int i = 0; result[i]; i++)
        printf("Word %d: %s\n", i, result[i]);

    // Free allocated memory
    for (int i = 0; result[i]; i++)
        free(result[i]);
    free(result);

    return (0);
}
