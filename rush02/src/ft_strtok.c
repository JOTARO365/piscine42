/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiaon-in <wiaon-in@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 08:29:01 by wiaon-in          #+#    #+#             */
/*   Updated: 2025/06/07 15:48:56 by wiaon-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/include.h"

static int	is_delm(char c, const char *delm)
{
	while (*delm)
	{
		if (c == *delm)
			return (0);
		delm++;
	}
	return (1);
}

char	*ft_strtok(char *str, const char *delm)
{
	static char		*token = NULL;
	char			*start;

	if (str)
		token = str;
	if (!token && *token == '\0')
		return (NULL);
	while (*token && is_delm(*token, delm))
		token++;
	if (*token == '\0')
		return (NULL);
	start = token;
	while (*token && !is_delm(*token, delm))
		token++;
	if (*token)
	{
		token = '\0';
		token++;
	}
	else
		token = NULL;
	return (start);
}
