/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:20:51 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/14 17:57:40 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/* #include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	printf("sequence at %s's index is : %d\n", argv[1],\
	 ft_fibonacci(atoi(argv[1])));
	return (0);
} */