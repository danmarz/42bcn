/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:27:30 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 14:41:59 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	is_printable;

	is_printable = 1;
	while (*str)
	{
		if (*str >= ' ' && *str <= '~')
		{
			str++;
		}
		else
		{
			is_printable = 0;
			break ;
		}
	}
	return (is_printable);
}
