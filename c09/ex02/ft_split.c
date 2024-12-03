/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 00:46:16 by ddumitre          #+#    #+#             */
/*   Updated: 2024/12/03 02:02:50 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_delimiter(char c, const char *charset)
{
	while (*charset)
		if (c == *charset++)
			return (1);
	return (0);
}

int	ft_count_substrings(const char *str, const char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (!ft_is_delimiter(*str, charset) && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (ft_is_delimiter(*str, charset))
			in_word = 0;
		str++;
	}
	return (count);
}

char	*ft_get_next_word(char **str, const char *charset)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (**str && ft_is_delimiter(**str, charset))
		(*str)++;
	while ((*str)[len] && !ft_is_delimiter((*str)[len], charset))
		len++;
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = **str;
		(*str)++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

void	ft_free_split(char **res, int allocated_count)
{
	int	i;

	i = 0;
	while (i < allocated_count)
	{
		free(res[i]);
		i++;
	}
	free(res);
}

char	**ft_split(char *str, const char *charset)
{
	char	**res;
	int		i;
	int		substr_count;

	i = 0;
	substr_count = ft_count_substrings(str, charset);
	res = malloc((substr_count + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (*str)
	{
		res[i] = ft_get_next_word(&str, charset);
		if (!res[i])
		{
			ft_free_split(res, i);
			return (NULL);
		}
		i++;
	}
	res[i] = NULL;
	return (res);
}
