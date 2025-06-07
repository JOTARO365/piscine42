/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiaon-in <wiaon-in@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 11:15:30 by wiaon-in          #+#    #+#             */
/*   Updated: 2025/06/07 20:35:48 by wiaon-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_H
# define INCLUDE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>

typedef struct s_stack
{
	int				*nbr;
	char			*name_number;
	struct s_stack	*next;
}	t_stack;

void	error_msg(char *msg);
char	ft_strlen(char *str);
char	*ft_strtok(char *str, const char *delm);

#endif
