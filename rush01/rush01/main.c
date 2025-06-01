/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiaon-in <wiaon-in@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 11:38:34 by wiaon-in          #+#    #+#             */
/*   Updated: 2025/06/01 18:23:31 by wiaon-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strtok(char *str, const char *delm);
int		ft_parse(char *input, int **grid, int size);

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	count_tokens(char *str)
{
	int		count;
	char	*token;

	count = 0;
	token = ft_strtok(str, " ");
	while (token)
	{
		count++;
		token = ft_strtok(NULL, " ");
	}
	return (count);
}

int	main(int argc, char **argv)
{
	int		len;
	char	*cpy_count;
	char	*cpy_parse;
	int		total;
	int		size;
	int		i;
	int		j;
	int		**grid;
	char	c;

	c = '0';
	if (argc != 2)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	len = ft_strlen(argv[1]);
	cpy_count = malloc(len + 1);
	if (!cpy_count)
	{
		free(cpy_count);
		return (0);
	}
	cpy_parse = malloc(len + 1);
	if (!cpy_parse)
	{
		free(cpy_parse);
		return (0);
	}
	if (!cpy_count || !cpy_parse)
		return (1);
	ft_strcpy(cpy_count, argv[1]);
	ft_strcpy(cpy_parse, argv[1]);
	total = count_tokens(cpy_count);
	size = 0;
	i = 4;
	while (i <= 9)
	{
		if (total == i * i)
		{
			size = i;
			break ;
		}
		i++;
	}
	if (size == 0)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	grid = malloc(size * sizeof(int *));
	if (!grid)
	{
		free(grid);
		return (0);
	}
	i = 0;
	while (i < size)
	{
		grid[i] = malloc(size * sizeof(int));
		if (!grid[i])
		{
			free(grid[i]);
			return (0);
		}
		i++;
	}
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	if (!ft_parse(cpy_parse, grid, size))
	{
		write(2, "Error\n", 6);
		return (1);
	}
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
	i = 0;
	while (i < size)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
	free(cpy_count);
	free(cpy_parse);
	return (0);
}

