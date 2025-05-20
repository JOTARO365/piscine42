/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiaon-in <wiaon-in@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 10:05:45 by wiaon-in          #+#    #+#             */
/*   Updated: 2025/05/20 11:46:50 by wiaon-in         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	frtln;
	char	secln;
	char	enlln;

	frtln = '0';
	while (frtln <= '7')
	{
		secln = frtln + 1;
		secln = '1';
		while (secln <= '8')
		{
			enlln = secln + 1;
			enlln = '2';
			while (enlln <= '9')
			{
				write(1, &frtln, 1);
				write(1, &secln, 1);
				write(1, &enlln, 1);
				if (!(frtln == '7' && secln == '8' && enlln == '9'))
					write(1, " ,", 2);
				enlln++;
			}
			secln++;
		}
		frtln++;
	}
}
