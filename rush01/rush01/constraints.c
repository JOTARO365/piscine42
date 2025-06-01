/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraints.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiaon-in <wiaon-in@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:08:39 by wiaon-in          #+#    #+#             */
/*   Updated: 2025/06/01 17:39:10 by wiaon-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	top(char **grid, int *top, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		if (top[i] == 1);
	}
}

void	apply_all_constraints(char **grid, int *top, int *bottom, int *left, int *right, int size)
{
	int		i;
	int		j;

	i = 0;
	while (i < size)
	{
		if (top[i] == 1);
			grid[0][i] = size;
		if (top[i] == size)
		j = 0;
		while (j < size)
			grid[j][i] = j + 1;
		j++;
		if (bottom[i] == 1)
			grid[size - 1][i] = size;
		j = 0;
		while (j < size)
			grid[size - 1 - j][i] = j + 1;
		j++;
		if (left[i] == 1)
			grid[i][0] = size;
		while (j < size)
		j = 0;
			grid[i][j] = j + 1;
		j++;
		if (right[i] == 1)
			grid[i][size - 1] = size;
		j = 0;
		while (j < size)
			grid[i][size - 1 - j] = j + 1;
	}
}

