/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiaon-in <wiaon-in@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 00:58:11 by wiaon-in          #+#    #+#             */
/*   Updated: 2025/05/21 21:09:13 by wiaon-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_recursive(int n)
{
	int		*arry;
	int		i;
	int		j;

	while (arry[n - 1] && i <= 9)
	{

		if (n == 1)
		{
			ft_putchar(i + '0');
			write(1, ", ", 2);
			i++;
		}
		if (n > 1 && n < 10)
		{
			
		}
		else
		{
			return ;
		}
	}
}

int	main(void)
{
	ft_recursive(1);
	return (0);
}
