/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:34:14 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 14:45:50 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lowercase_alpha(char chr)
{
	return (chr >= 'a' && chr <= 'z');
}

int	ft_char_is_uppercase_alpha(char chr)
{
	return (chr >= 'A' && chr <= 'Z');
}

int	ft_char_is_alphanumeric(char chr)
{
	return ((chr >= 'A' && chr <= 'Z') || (chr >= 'a' && chr <= 'z')
		|| (chr >= '0' && chr <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_char_is_alphanumeric(str[i])
			&& (i == 0 || !ft_char_is_alphanumeric(str[i - 1])))
		{
			if (ft_char_is_lowercase_alpha(str[i]))
				str[i] -= 32;
		}
		else if (ft_char_is_uppercase_alpha(str[i]))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
