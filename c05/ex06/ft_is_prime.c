/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:27:18 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/16 04:07:10 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	n;

	n = nb;
	if (n == 2)
		return (1);
	if (n % 2 == 0 || n < 2)
		return (0);
	i = 3;
	while (i <= n / i)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	for (int i = 0; i < 5000; i++)
	{
		if (ft_is_prime(i))
			printf("%d; ", i);
	}
	if (argc != 2)
		return (0);
	int ret = ft_is_prime(atoi(argv[1]));
	if (ret == 1)
		printf("le nombre %d est premier\n", atoi(argv[1]));
	else
		printf("le nombre %d n'est pas premier\n", atoi(argv[1]));
	return (0);
}*/
