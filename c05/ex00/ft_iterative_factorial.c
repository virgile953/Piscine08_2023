/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:32:19 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/14 15:43:05 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb < 1)
		return (1);
	i = nb - 1;
	while (i > 1)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}
/* 
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	(void)argc;
	printf("factorial of %s is : %d\n", argv[1], \
	ft_iterative_factorial(atoi(argv[1])));
	return (5);
}
 */