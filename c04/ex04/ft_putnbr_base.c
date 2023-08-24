/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 21:56:14 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/14 12:36:25 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	loop(int nbr, char *base, int l)
{
	int	n;

	if (nbr >= l)
	{
		n = nbr % l;
		nbr = (nbr - n) / l;
		loop(nbr, base, l);
		write(1, &base[n], 1);
	}
	else
		write(1, &base[nbr], 1);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+' || base[i] == ' '
			|| base[i] == '\t' || base[i] == '\n' || base[i] == '\r'
			|| base[i] == '\v' || base[i] == '\f')
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	l;

	l = ft_strlen(base);
	if (l <= 1)
		return ;
	if (ft_check_base(base) == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	loop(nbr, base, l);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 0)
		return 0;
	ft_putnbr_base(atoi(argv[1]), argv[2]);
	return 0;
}*/
