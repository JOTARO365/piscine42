/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiaon-in <wiaon-in@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:52:42 by wiaon-in          #+#    #+#             */
/*   Updated: 2025/05/20 16:52:18 by wiaon-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	i;
	char	j;
	char	k;
	char	l;

	i = '0';
	while (i <= '9')
	{
		j = i + 1;
		j = '0';
		while(j <= '9')
		{
			k = j + 1;
			k = '0';
			while (k <= '9')
			{
				l = k + 1;
				l = '1';
				while (l <= '9')
				{
					if (!(i == '0' && j == '0' && k == '0' && l == '1'))
						write(1, " ,", 2);
					ft_putchar(i);
					ft_putchar(j);
					ft_putchar(' ');
					ft_putchar(k);
					ft_putchar(l);
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}

int	main()
{
	ft_print_comb2();
	return (0);
}
