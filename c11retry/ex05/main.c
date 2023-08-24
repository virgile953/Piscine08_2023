/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:31:24 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/24 20:26:57 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	basereturn(void)
{
	return (0);
}

int	main(int argc, char **argv)
{
	t_parsed	return_val;

	if (argc != 4)
		return (0);
	return_val.is_error = 0;
	return_val.errornum = 0;
	parse_inputs(argc, argv, &return_val);
	if (return_val.is_error || return_val.errornum != 0)
		return (0);
	do_op(&return_val);
	ft_putnbr(return_val.result);
	ft_putchar('\n');
	return (0);
}
