/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 20:04:01 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/20 23:35:14 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	i = 0;
	sign = 1;
	nbr = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
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
/*
int main (int argc, char **argv)
{
	int	i;
	// printf("%d\n", ft_atoi("54"));

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			printf("%d\n", ft_atoi(argv[i]));
			i++;
		}
	}
}*/
