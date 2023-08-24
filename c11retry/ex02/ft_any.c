/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 00:57:27 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/22 12:59:06 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* int	ft_test(char *str)
{
	if (str[0] == 'H')
		return (1);
	return (0);
} */

int	ft_any(char **tab, int (*f)(char *))
{
	int	idx;

	idx = 0;
	while (tab[idx++])
		if (f(tab[idx - 1]))
			return (1);
	return (0);
}

// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	printf("has any arg started with 'H' ? %d\n", ft_any(argv, &ft_test));
// }
