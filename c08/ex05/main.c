/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:41:49 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/21 18:07:50 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int	main(int argc, char **argv)
{
	t_stock_str	*coucou;

	if (argc < 2)
	{
		printf("au moins un argument est attendu wsh\n");
		return (0);
	}
	coucou = ft_strs_to_tab(argc, argv);
	coucou[0].copy = "coucou";
	ft_show_tab(coucou);
	return (0);
}
