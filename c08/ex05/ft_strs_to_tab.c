/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 16:07:42 by ddumitre          #+#    #+#             */
/*   Updated: 2024/12/01 17:01:53 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = ft_strlen(src);
	dest = malloc(i + 1);
	if (dest == NULL)
		return (dest);
	dest[i] = '\0';
	while (i--)
		dest[i] = src[i];
	return (dest);
}

void	*ft_free(struct s_stock_str *s, int n)
{
	int	i;

	i = 0;
	while (i < n)
		free(s[i++].copy);
	free(s);
	return (NULL);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*result;

	result = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!result)
		return (result);
	i = 0;
	while (i < ac)
	{
		result[i].size = ft_strlen(av[i]);
		result[i].str = av[i];
		result[i].copy = ft_strdup(av[i]);
		if (result[i].copy == NULL)
			return (ft_free(result, i));
		i++;
	}
	result[i].str = 0;
	return (result);
}
