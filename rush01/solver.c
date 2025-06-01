/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiaon-in <wiaon-in@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 11:53:27 by wiaon-in          #+#    #+#             */
/*   Updated: 2025/06/01 22:24:45 by wiaon-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid(int **grid, int *pos, int val, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (grid[pos[0]][i] == val || grid[i][pos[1]] == val)
			return (0);
		i++;
	}
	return (1);
}

int	find_empty_cell(int **grid, int size, int *row, int *col)
{
	*row = 0;
	while (*row < size)
	{
		*col = 0;
		while (*col < size)
		{
			if (grid[*row][*col] == 0)
				return (1);
			(*col)++;
		}
		(*row)++;
	}
	return (0);
}

int	solve(int **grid, int *con, int size)
{
	int	row;
	int	col;
	int	val;
	int	pos[2];

	if (!find_empty_cell(grid, size, &row, &col))
		return (1);
	pos[0] = row;
	pos[1] = col;
	val = 1;
	while (val <= size)
	{
		if (is_valid(grid, pos, val, size))
		{
			grid[row][col] = val;
			if (solve(grid, con, size))
				return (1);
			grid[row][col] = 0;
		}
		val++;
	}
	return (0);
}
