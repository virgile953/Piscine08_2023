/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 00:36:06 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/22 02:02:50 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i++ < length)
	{
		f(tab[i]);
        write(1, "\n", 1);
	}
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
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	*tab;
	int	i;

	i = 1;
	tab = malloc(sizeof(int) * (argc - 1));
	while (i++ < argc)
	{
		tab[i - 1] = atoi(argv[i - 1]);
	}
	ft_foreach(tab, argc - 1, &ft_putnbr);
}
