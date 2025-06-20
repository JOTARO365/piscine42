/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constraints.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiaon-in <wiaon-in@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 12:08:39 by wiaon-in          #+#    #+#             */
/*   Updated: 2025/06/01 22:23:17 by wiaon-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	apply_direct_constraints(int **grid, int *con, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (con[i] == 1)
			grid[0][i] = size;
		if (con[size + i] == 1)
			grid[size - 1][i] = size;
		if (con[2 * size + i] == 1)
			grid[i][0] = size;
		if (con[3 * size + i] == 1)
			grid[i][size - 1] = size;
		i++;
	}
}
