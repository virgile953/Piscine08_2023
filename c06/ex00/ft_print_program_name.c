/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 20:46:46 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/10 20:54:15 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*(str++))
		write(1, str - 1, 1);
}

int	main(int argc, char **argv)
{
	if (argc)
	{
		argc --;
	}
	ft_putstr(argv[0]);
	ft_putstr("\n");
	return (0);
}
