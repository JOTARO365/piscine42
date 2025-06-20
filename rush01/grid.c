/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiaon-in <wiaon-in@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 11:56:07 by wiaon-in          #+#    #+#             */
/*   Updated: 2025/06/01 23:27:51 by wiaon-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	print_grid(int **grid, int size)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			c = grid[i][j] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	reset_grid(int **grid, int size)
{
	int		i;
	int		j;

	i = 0;
	while (i < size)
	{
		grid[i] = malloc(size * sizeof(int));
		j = 0;
		while (j < size)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

