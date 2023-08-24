/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dictionnary.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:48:00 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/20 23:36:24 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	open_dict(char *dict_name)
{
	int	dic_id;

	dic_id = open(dict_name, O_RDONLY);
	if (dic_id < 0)
		return (-1);
	return (dic_id);
}

int	ft_get_dict_len(char *dict_name)
{
	int		fd;
	char	buffer[100];
	int		size;
	int		size_total;

	size_total = 0;
	size = 1;
	fd = open(dict_name, O_RDONLY);
	while (size > 0)
	{
		size = read(fd, buffer, 100);
		size_total += size;
	}
	close(fd);
	return (size_total + 1);
}

t_dict_line	*ft_read_dict(int dict_id, char *dict_name)
{
	char	*buffer;
	char	**ret_buffer;
	int		i;

	i = 0;
	buffer = malloc(ft_get_dict_len(dict_name) * sizeof(char));
	read(dict_id, buffer, ft_get_dict_len(dict_name));
	ret_buffer = ft_split(buffer, "\n");
	while (ret_buffer[i])
		i++;
	return (ft_strs_to_tab(i, ret_buffer));
}

void	ft_findvalue(char *key, struct t_dict_line *tab)
{
	int	i;

	i = 0;
	while (tab[i].size_num != 0)
	{
		if (ft_atoi(tab[i].number) == ft_atoi(key))
		{
			ft_putstr(tab[i].letters);
			return ;
		}
		i++;
	}
}

void	ft_convert(char *nbr, struct t_dict_line *tab, char *magnitude, int i)
{
	char	*block;
	char	*new;

	if (i % 3 == 2 && nbr[i + 1])
		ft_strcat(magnitude, "000");
	new = ft_strndup(magnitude, 0, ft_strlen(magnitude));
	if (i > 0)
		ft_convert(nbr, tab, magnitude, i - 1);
	block = malloc(3);
	block[2] = '\0';
	if (i != 0)
		ft_putchar(' ');
	if (i % 3 == 0)
	{
		if (nbr[i] != '0')
		{
			block[0] = nbr[i];
			block[1] = '\0';
			ft_findvalue(block, tab);
			ft_putchar(' ');
			ft_findvalue("100", tab);
		}
	}
	else if (i % 3 == 1)
	{
		if (nbr[i] != '0')
		{
			block[0] = nbr[i];
			if (nbr[i] > '1')
				block[1] = '0';
			else
				block[1] = nbr[i + 1];
			ft_findvalue(block, tab);
		}
	}
	else if (i % 3 == 2)
	{
		if (nbr[i - 1] == '1')
			return ;
		if (nbr[i] != '0' || ft_strlen(nbr) == 1)
		{
			block[0] = nbr[i];
			block[1] = '\0';
			ft_findvalue(block, tab);
		}
		if (nbr[i + 1])
		{
			ft_putchar(' ');
			ft_findvalue(new, tab);
		}
	}
	free(block);
	free(new);
}
