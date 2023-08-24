/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 23:06:13 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/19 16:44:40 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*return_tab;

	if (min >= max)
		return (NULL);
	i = 0;
	size = max - min;
	return_tab = malloc(size * sizeof(int));
	while (min < max)
		return_tab[i++] = min++;
	return (return_tab);
}
/* 
#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	begin;
	int	end;
	int	*tab;
	int	i;

	if (argc != 3)
	{
		printf("deux arguments sont attendus, valeur min et valeur max\n");
		return (0);
	}
	begin = atoi(argv[1]);
	end = atoi(argv[2]);
	tab = ft_range(begin, end);
	if (begin > end)
	{
		printf("oopsies\n");
		return (0);
	}
	i = 0;
	for (i = 0; i < (end - begin) - 1; i++)
		printf("%d ", tab[i]);
	printf("%d\n", tab[i]);
} */
