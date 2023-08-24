/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 00:52:34 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/22 00:57:00 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*ret;
	int	i;

	i = 0;
	ret = malloc(sizeof(int) * length);
	if (!ret)
		return (NULL);
	while (i < length)
	{
		ret[i] = f(tab[i]);
	}
	return (ret);
}
