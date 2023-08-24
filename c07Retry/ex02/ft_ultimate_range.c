/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 04:13:56 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/19 20:32:11 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(size * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (size);
}

/* #include <unistd.h>
#include <stdio.h>


int	main(void)
{
	int *range;

	printf("Warn: Any segfault will mean that arrays are not \
allocated\n\n");

	printf("5:%d\n", ft_ultimate_range(&range, 0, 5));
	printf("0, 1, 2, 3, 4 : %d, %d, %d, %d, %d\n", range[0], \
	range[1], range[2], range[3], range[4]);
	
	printf("0:%d\n", ft_ultimate_range(&range, 3, 3));
	
	printf("2:%d\n", ft_ultimate_range(&range, -1, 1));
	printf("-1, 0 : %d, %d", range[0], range[1]);
} */
/* int	main (int argc, char **argv)
{
	int	begin;
	int	end;
	int	**tab;
	int	res;

 	if (argc != 3)
	{
		printf("deux arguments sont attendus, valeur min et valeur max\n");
		return (0);
	}
	begin = atoi(argv[1]);
	end = atoi(argv[2]); 
	//begin = 0;
	//end = 10;
	res = 0;
	**tab = 0;
	res = ft_ultimate_range(tab, begin, end);
	printf("tableau de %d ints\n", res);
	for(int i = 0; i < (end - begin); i++)
		printf("%d ", *tab[i]);
} */
