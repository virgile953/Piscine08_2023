/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 04:46:21 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/22 04:50:12 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	ft_test(char *str)
// {
// 	if (str[0] == 'H')
// 		return (1);
// 	return (0);
// }

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	idx;
	int	j;

	j = 0;
	idx = 0;
	while (tab[idx++])
		if (f(tab[idx - 1]))
			j++;
	return (j);
}
/* 
#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("the count of args that start with 'H' : %d\n", ft_count_if(argv,
			argc, &ft_test));
} */
