/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 18:23:19 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/12 18:23:20 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char str)
{
	if (str < '0' || str > '9')
		return (0);
	return (1);
}



int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nbr;
	int	is_more_than_ten;

	i = 0;
	sign = 1;
	nbr = 0;
	is_more_than_ten = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_str_is_numeric(str[i]) == 1)
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	return (nbr * sign);
}
