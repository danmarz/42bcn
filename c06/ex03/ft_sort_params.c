/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 21:56:35 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/26 23:12:38 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

// Function to print a string followed by a newline
void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

// Function to swap two pointers
void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// Function to compare two strings
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

// Function to sort an array of strings alphabetically
void	ft_sort_args(char **args, int count)
{
	int		i;
	int		j;

	i = 0;
	while (i < count - 1)
	{
		j = 0;
		while (j < count - i - 1)
		{
			if (ft_strcmp(args[j], args[j + 1]) > 0)
				ft_swap(&args[j], &args[j + 1]);
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	**args;
	int		i;

	args = (char **)malloc(sizeof(char *) * (argc - 1));
	if (!args)
		return (1);
	i = 0;
	while (i < argc - 1)
	{
		args[i] = argv[i + 1];
		i++;
	}
	ft_sort_args(args, argc - 1);
	i = 0;
	while (i < argc - 1)
	{
		ft_putstr(args[i]);
		i++;
	}
	free(args);
	return (0);
}
