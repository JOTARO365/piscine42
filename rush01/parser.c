/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiaon-in <wiaon-in@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 11:53:30 by wiaon-in          #+#    #+#             */
/*   Updated: 2025/06/01 12:04:48 by wiaon-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int		i;
	int		nbr;

	nbr = 0;
	i = 0;
	while (str[i] <= ' ')
		i++;
	while ((str[i] >= '0' && str[i] <= '9')
		|| str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-' || str[i] == '+')
			i++;
		if (str[i] >= '0' && str[i] <= '9')
			nbr = nbr * 10 + str[i] - 48;
		i++;
	}
	return (nbr);
}

int	ft_is_delm(char c, const char *delm)
{
	int		i;

	i = 0;
	while (delm[i] != '\0')
	{
		if (c == delm[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtok(char *str, const char *delm)
{
	static char		*next = NULL;
	char			*start;
	int				i;

	if (str)
		next = str;
	if (!next || *next == '\0')
		return (NULL);
	i = 0;
	while (*next && ft_is_delm(*next, delm))
		next++;
	if (*next == '\0')
		return (NULL);
	start = next;
	while (*next && !ft_is_delm(*next, delm))
		next++;
	if (*next)
	{
		*next = '\0';
		next++;
	}
	else
		next = NULL;
	return (start);
}

int	*allocate_grid(int **grid, int size)
{
	int		i;
	int		j;

	i = 0;
	while (i < size)
	{
		grid[i] = malloc(size * sizeof(int));
		if (!grid)
			return (0);
		while (j < size)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	ft_parse(char *input, int **grid, int size)
{
	char	*token;
	int		i;
	int		j;
	int		count;

	grid = malloc(size * sizeof(int *));
	if (!grid || !input)
		return (0);
	i = 0;
	count = 0;
	allocate_grid(grid, size);
	token = ft_strtok(input, " ");
	while (token && count < size * size)
	{
		grid[count / size][count % size] = ft_atoi(token);
		token = ft_strtok(NULL, " ");
		count++;
	}
	if (count != size * size)
		return (0);
	return (1);
}
