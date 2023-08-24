/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 18:42:12 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/20 19:19:34 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

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

struct t_dict_line	*ft_strs_to_tab(int count, char **tab)
{
	int			i;
	char		**test;
	t_dict_line	*return_tab;
	int			j;

	i = 0;
	return_tab = malloc(sizeof(t_dict_line) * (count + 1));
	if (!return_tab)
		return (NULL);
	while (tab[i])
	{
		test = ft_split(tab[i], ": ");
		return_tab[i].size_num = ft_strlen(test[0]);
		return_tab[i].number = test[0];
		test++;
		j = 0;
		while (test[j])
			j++;
		return_tab[i].letters = ft_strjoin(j, test, " ");
		i++;
	}
	return_tab[i].size_num = 0;
	return (return_tab);
}

void	ft_show_tab(struct t_dict_line *tab)
{
	int	i;

	i = 0;
	while (tab[i].size_num != 0)
	{
		ft_putstr(tab[i].letters);
		ft_putchar('\n');
		ft_putnbr(tab[i].size_num);
		ft_putchar('\n');
		ft_putstr(tab[i].number);
		ft_putchar('\n');
		i++;
		ft_putstr("==========================\n");
	}
}
