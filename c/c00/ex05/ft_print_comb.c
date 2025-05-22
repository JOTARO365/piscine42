/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiaon-in <wiaon-in@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:05:45 by wiaon-in          #+#    #+#             */
/*   Updated: 2025/05/22 01:37:15 by wiaon-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char frt, char sec, char third)
{
	write(1, &frt, 1);
	write(1, &sec, 1);
	write(1, &third, 1);
	if (!(frt == '7' && sec == '8' && third == '9'))
	{
		write(1, " ,", 1);
	}
}

void	ft_print_comb(void)
{
	char	frtln;
	char	secln;
	char	enlln;

	frtln = '0';
	secln = '1';
	enlln = '2';
	
	while (frtln <= '7')
	{
		secln = frtln + 1;
		while (secln <= '8')
		{
			enlln = secln + 1;
			while (enlln <= '9')
			{
				ft_write(frtln, secln, enlln);
				enlln++;
			}
			secln++;
		}
		frtln++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
