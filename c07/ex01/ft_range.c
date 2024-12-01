/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 23:35:46 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/30 17:52:43 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	index;
	int	size;

	if (min >= max)
		return (NULL);
	size = max - min;
	if (size <= 0 || (unsigned int)size > INT_MAX / sizeof(int))
		return (NULL);
	range = malloc(size * sizeof(int));
	if (!range)
		return (NULL);
	index = 0;
	while (index < size)
	{
		range[index] = min + index;
		index++;
	}
	return (range);
}
