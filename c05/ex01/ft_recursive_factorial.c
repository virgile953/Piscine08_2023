/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:43:44 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/14 15:49:08 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/* 
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	printf("factorial of %s is : %d\n", argv[1], \
	ft_recursive_factorial(atoi(argv[1])));
	return (5);
}
 */