/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiaon-in <wiaon-in@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 11:38:34 by wiaon-in          #+#    #+#             */
/*   Updated: 2025/06/01 23:40:14 by wiaon-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strtok(char *str, const char *delm);
int		ft_parse(char *input, int **grid, int size);
int		get_size(char *str);
void	print_grid(int **grid, int size);
int		init_args(int argc, char **argv, char **cpy_count, char **cpy_parse);
void	reset_grid(int **grid, int size);
void	free_all(int **grid, int size, char *cpy_count, char *cpy_parse);
int		count_size(int total, int size);
void	apply_direct_constraints(int **grid, int *con, int size);
int		solve(int **grid, int *con, int size);
int		print_error(void);


int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src, char **argv)
{
	int		i;
	char	*str;

	i = 0;
	str =  malloc(ft_strlen(argv[1]) + 1);
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
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
	char	*cpy_count;
	char	*cpy_parse;
	int		size;
	int		**grid;

	if (argc != 2)
		return (print_error());
	cpy_count = ft_strcpy(cpy_count, argv[1], argv[1]);
	cpy_parse = ft_strcpy(cpy_parse, argv[1], argv[1]);
	if (!cpy_count || !cpy_parse)
		return (1);
	size = count_size(count_tokens(cpy_count), size);
	if (size == 0)
		return (print_error());
	grid = malloc(size * sizeof(int *));
	reset_grid(grid, size);
	if (!ft_parse(cpy_parse, grid, size))
		return (print_error());
	if (!solve)
		print_grid(grid, size);
	else
		return (print_error());
	free_all(grid, size, cpy_count, cpy_parse);
	return (0);
}
