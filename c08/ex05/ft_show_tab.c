/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 22:10:17 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/22 01:47:52 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putstr(char *str)
{
	while (*(str++))
		write(1, str - 1, 1);
	write(1, "\n", 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	t[12];
	int		i;

	i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb == 0)
		ft_putchar('0');
	while (nb)
	{
		t[i++] = ('0' + nb % 10);
		nb = nb / 10;
	}
	while (i)
		ft_putchar(t[--i]);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (*par[i++].str != '\0')
	{
		ft_putstr(par[i - 1].str);
		ft_putnbr(par[i - 1].size);
		ft_putchar('\n');
		ft_putstr(par[i - 1].copy);
		ft_putstr("==============");
	}
}

int	main(int argc, char **argv)
{
	t_stock_str	*plop;

	plop = ft_strs_to_tab(argc, argv);
	plop[0].copy = "test";
	ft_show_tab(plop);
	return (0);
}
