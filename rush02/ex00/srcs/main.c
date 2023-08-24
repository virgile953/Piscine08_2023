/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:36:25 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/20 23:26:18 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_fill(char *str, char *model)
{
	int	len;

	(void)str;
	len = ft_strlen(model);
	str = malloc(+len + 1);
}

int	main(int argc, char **argv)
{
	int			dict_id;
	char		*dict_name;
	char		*magnitude;
	t_dict_line	*oueoue;

	dict_name = get_dict_name(argc, argv);
	if (!dict_name)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	dict_id = open_dict(dict_name);
	oueoue = ft_read_dict(dict_id, dict_name);
	magnitude = malloc(ft_strlen(argv[1]) + 1);
	if (!magnitude)
		return (0);
	magnitude[0] = '1';
	ft_convert(argv[1], oueoue, magnitude, ft_strlen(argv[1]) - 1);
	free(magnitude);
	return (0);
}
// printf("dict name : '%s'\n", dict_name);
