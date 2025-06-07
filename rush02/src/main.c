/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiaon-in <wiaon-in@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 08:26:12 by wiaon-in          #+#    #+#             */
/*   Updated: 2025/06/07 21:39:14 by wiaon-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/include.h"

int	main(int arc, char **arv)
{
	int		fd;
	int		i;
	char	buffer[BUFFER_SIZE + 1];
	ssize_t	readfile;
	char	*token;

	if (arc < 2 || arc > 3)
		return (1);
	i = 0;
	while (arv[1][i])
	{
		write(1, &arv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	fd = open("dictfile/numbers.dict", O_RDONLY);
	if (fd < 0)
	{
		error_msg("Error Cannot Open File !!!\n");
		return (1);
	}
	readfile = read(fd, buffer, BUFFER_SIZE);
	if (readfile < 0)
		return (2);
	buffer[readfile] = '\0';
	token = ft_strtok(buffer, "\n");
	while (token != NULL)
	{
		printf("token : %s\n", token);
		token = ft_strtok(NULL, "\n");
	}
	close(fd);
	return (0);
}
