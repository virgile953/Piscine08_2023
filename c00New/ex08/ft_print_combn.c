/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:48:11 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/03 17:14:48 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_comma(int n_base, int print)
{
	int		n;
	int		p;

	p = 0;
	while (n_base > 0)
	{
		n = 10;
		n = n - n_base;
		p = (p * 10) + n;
		n_base--;
	}
	if (p != print)
		write(1, ", ", 2);
}

void	ft_write(int print, int isZero, int n_base, int nc)
{
	int		np;
	int		p;
	char	w;

	if (isZero == 1)
		write(1, "0", 1);
	if (print <= 9)
	{
	w = print + '0';
		write(1, &w, 1);
	}
	else
	{
		np = print % 10;
		p = (print - np) / 10;
		w = np + '0';
		ft_write(p, 0, n_base, (nc + 1));
		write(1, &w, 1);
	}
	if (nc == 0)
		ft_put_comma(n_base, print);
}

void	loop(int n, int print, int isZero, int n_base)
{
	int		a;
	int		b;

	if (n == 0)
		ft_write(print, isZero, n_base, n);
	else
	{
		a = (print % 10) + 1;
		while (a <= 9)
		{
			b = (print * 10) + a;
			loop((n - 1), b, isZero, n_base);
			a++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	a;

	if (n <= 0 || n >= 10)
		return ;
	else
	{
		a = 0;
		while (a <= 9)
		{
			if (a == 0 && n > 1)
			{
				loop((n - 1), 0, 1, n);
			}
			else
			{
				loop((n - 1), a, 0, n);
			}
			a++;
		}
	}
}
