/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support_fcts2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 19:10:13 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/20 19:13:34 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

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
