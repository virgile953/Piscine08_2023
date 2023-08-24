/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:17:40 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/22 04:29:17 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*(str++))
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*new_string;

	i = 0;
	new_string = malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!new_string)
		return (NULL);
	while (src[i])
	{
		new_string[i] = src[i];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*return_tab;

	i = 0;
	return_tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!return_tab)
		return (NULL);
	while (i < ac)
	{
		return_tab[i].size = ft_strlen(av[i]);
		return_tab[i].copy = ft_strdup(av[i]);
		return_tab[i].str = av[i];
		i++;
	}
	return_tab[i].str = 0;
	return (return_tab);
}
