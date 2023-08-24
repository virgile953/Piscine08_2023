/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_inputs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 16:59:28 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/20 23:41:22 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*get_dict_name(int argc, char **argv)
{
	char	*dict_name;

	if (argc < 2 || argc > 3)
	{
		dict_name = malloc(sizeof(char));
		dict_name[0] = '\0';
		return (dict_name);
	}
	else if (argc == 3)
	{
		dict_name = malloc((ft_strlen(argv[1]) + 1) * sizeof(char));
		if (!dict_name)
			return (0);
		dict_name = ft_strndup(argv[1], 0, ft_strlen(argv[1]));
	}
	else
	{
		dict_name = malloc((ft_strlen("numbers.dict") + 1) * sizeof(char));
		if (!dict_name)
			return (0);
		dict_name = "numbers.dict";
	}
	return (dict_name);
}
//		is_negative(argv[2]);

int	is_negative(char *x)
{
	if (*x == '-')
	{
		ft_putstr("Error\n");
		return (0);
	}
}
