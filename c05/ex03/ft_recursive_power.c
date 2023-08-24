/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:02:42 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/14 16:16:51 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

/* #include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{
	printf("power %s of %s is : %d\n",argv[2], argv[1],\
	ft_recursive_power(atoi(argv[1]), atoi(argv[2]))); 
	printf("power %s of %s is : %d\n",argv[2], argv[1],\
	ft_recursive_power(5, 4));
	return (5);
}
 */