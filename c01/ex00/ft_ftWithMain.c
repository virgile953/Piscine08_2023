/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:47:08 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/03 18:03:53 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	reste;
	int		reste_int;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		reste_int = nb % 10;
		reste = reste_int + '0';
		nb = (nb - reste_int) / 10;
		ft_putnbr(nb);
	}
	else
	{
		reste = nb + '0';
	}
	ft_putchar(reste);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	coucou;
	int	*ptrcoucou;

	coucou = 0;
	ptrcoucou = &coucou;
	ft_ft(ptrcoucou);
	ft_putnbr(*ptrcoucou);
	return (0);
}
