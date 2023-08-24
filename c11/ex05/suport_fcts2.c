/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   suport_fcts2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:12:34 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/24 16:40:46 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

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

void	do_op(t_parsed *struc)
{
	struc->result = struc->op(struc->l_int, struc->r_int);
}
