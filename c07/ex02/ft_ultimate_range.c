/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 21:02:05 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/30 22:34:07 by ddumitre         ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
