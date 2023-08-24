/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2123/08/22 04:51:08 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/24 19:05:58 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	is_s_up;
	int	is_s_down;

	is_s_down = 1;
	is_s_up = 1;
	if (length <= 1)
		return (1);
	i = 1;
	while (i++ < length && is_s_up != 0)
		if (f(tab[i - 2], tab[i - 1]) > 0)
			is_s_up = 0;
	i = 1;
	while (i++ < length && is_s_down != 0)
		if (f(tab[i - 2], tab[i - 1]) < 0)
			is_s_down = 0;
	if (!is_s_up && !is_s_down)
		return (0);
	return (1);
}

/* int	ft_test(int a, int b)
{
	if (a == b)
		return (0);
	if (a > b)
		return (a - b);
	if (b > a)
		return (-1);
	return (-1);
} */

/*int	main(int argc, char **argv)
{
	int	*tab;
	int	i;
	int	res;

	i = 1;
	tab = malloc((argc - 1) * sizeof(int));
	if (!tab)
		return (0);
	while (i++ < argc)
	{
		tab[i - 2] = atoi(argv[i - 1]);
	}
	printf("the tab : ");
	i = 0;
	while (i++ < argc - 1)
	{
		printf("%d ", tab[i - 1]);
	}
	res = ft_is_sort(tab, argc - 1, &ft_test);
	if (res > 0)
		printf("is sorted\n");
	else
		printf("is not sorted\n");
	return (0);
}
*/