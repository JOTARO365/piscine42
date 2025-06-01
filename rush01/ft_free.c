/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiaon-in <wiaon-in@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 20:49:45 by wiaon-in          #+#    #+#             */
/*   Updated: 2025/06/01 23:09:01 by wiaon-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	free_all(int **grid, int size, char *cpy_count, char *cpy_parse)
{
	int		i;

	i = 0;
	while (i < size)
	{
		free(grid[i]);
		i++;
	}
	free(cpy_count);
	free(cpy_parse);
}
