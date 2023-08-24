/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:11:25 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/03 17:12:39 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fnl_loop(char a, char b, char c, char d)
{
	while (c <= '9')
	{
		if (a == c)
			d = b + 1;
		else
			d = '0';
		while (d <= '9')
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, " ", 1);
			write(1, &c, 1);
			write(1, &d, 1);
			if (a < '9' || b < '8')
				write(1, ", ", 2);
			d++;
		}
		c++;
	}
}

void	ft_print_comb2(void)
{
	char	res[4];

	res[0] = '0';
	res[1] = '0';
	while (res[0] <= '9')
	{
		while (res[1] <= '9')
		{
			res[2] = res[0];
			fnl_loop(res[0], res[1], res[2], res[3]);
			res[1]++;
			res[3] = '0';
		}
		res[0]++;
		res[1] = '0';
	}
}
