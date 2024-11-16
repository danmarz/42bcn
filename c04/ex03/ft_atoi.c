/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:34:59 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/16 21:02:39 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Space chars as defined by isspace() man page:
 *
 * * space
 * * form-feed ('\f')
 * * newline ('\n')
 * * carriage return ('\r')
 * * horizontal tab ('\t')
 * * vertical tab ('\v')
 */

int	ft_isspace(char c)
{
	if (c == ' '
		|| c == '\f'
		|| c == '\n'
		|| c == '\r'
		|| c == '\t'
		|| c == '\v')
		return (1);
	return (0);
}

int	ft_isnumeric(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	nbr;
	int	start;
	int	sign;

	nbr = 0;
	start = 0;
	sign = 1;
	while (ft_isspace(str[start]))
		start++;
	while (str[start] == '+' || str[start] == '-')
	{
		if (str[start] == '-')
			sign *= -1;
		start++;
	}
	while (ft_isnumeric(str[start]))
	{
		nbr = (nbr * 10) + (str[start] - '0');
		start++;
	}
	return (nbr * sign);
}
