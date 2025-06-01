/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiaon-in <wiaon-in@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 11:58:38 by wiaon-in          #+#    #+#             */
/*   Updated: 2025/06/01 23:22:09 by wiaon-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int			ft_strlen(char *str);
char		*ft_strcpy(char *dest, char *src);
int			count_tokens(char *str);

int	init_args(int argc, char **argv, char **cpy_count, char **cpy_parse)
{
	int	len;

	if (argc != 2)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	len = ft_strlen(argv[1]);
	*cpy_count = malloc(len + 1);
	*cpy_parse = malloc(len + 1);
	if (!*cpy_count || !*cpy_parse)
		return (0);
	ft_strcpy(*cpy_count, argv[1]);
	ft_strcpy(*cpy_parse, argv[1]);
	return (1);
}

int	get_size(char *str)
{
	int	total;
	int	i;

	i = 4;
	total == count_tokens(str);
	while (i <= 9)
	{
		if (total == i * i)
			return (i);
		i++;
	}
	return (0);
}
int	print_error(void)
{
	write(2, "Error\n", 6);
	return (1);
}
