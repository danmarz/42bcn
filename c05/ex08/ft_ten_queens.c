/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddumitre <ddumitre@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 00:30:14 by ddumitre          #+#    #+#             */
/*   Updated: 2024/11/19 00:30:47 by ddumitre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Prints the board configuration to the standard output.
** Converts each number in the array to a character.
*/
void	print_board(int board[])
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

/*
** Checks if a queen can be placed at (row, col) without conflict.
** Returns 1 if safe, 0 otherwise.
*/
int	is_safe(int board[], int row, int col)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (board[i] == col)
			return (0);
		if (i - row == board[i] - col || i - row == col - board[i])
			return (0);
		i++;
	}
	return (1);
}

/*
** Recursive function to solve the 10 queens puzzle.
** Places queens row by row and calls itself for the next row.
*/
void	solve(int board[], int row, int *count)
{
	int	col;

	if (row == 10)
	{
		print_board(board);
		(*count)++;
		return ;
	}
	col = 0;
	while (col < 10)
	{
		if (is_safe(board, row, col))
		{
			board[row] = col;
			solve(board, row + 1, count);
		}
		col++;
	}
}

/*
** Entry point of the 10 queens puzzle solver.
** Initializes the board and calls the recursive solver.
*/
int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	count;

	count = 0;
	solve(board, 0, &count);
	return (count);
}
