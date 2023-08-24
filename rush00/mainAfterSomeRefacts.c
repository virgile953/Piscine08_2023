/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:33:06 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/05 19:38:09 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putword(char *c)
{
	while (*c != '\0')
	{
		ft_putchar(*c);
		c++;
	}
}

void	ft_def_chars(char *list)
{
	*list = 'o';
	list++;
	*list = '-';
	list++;
	*list = 'o';
	list++;
	*list = '|';
	list++;
	*list = 'o';
	list++;
	*list = 'o';
}

void	rush(int x, int y)
{
	char	charlist[6];
	int		line_index;
	int		col_index;
	int		actual_index;

	ft_def_chars(charlist);
	actual_index = 0;
	while (actual_index < (x * y))
	{
		line_index = actual_index / x;
		col_index = actual_index % x;
		if (line_index == 0 && col_index == 0)
			ft_putchar(charlist[0]);
		if (line_index == 0 && col_index == x - 1 && x > 1)
			ft_putchar(charlist[2]);
		if (line_index == 0 && (col_index > 0 && col_index < x - 1))
			ft_putchar(charlist[1]);
		if (line_index > 0 && line_index < y - 1)
		{
			if (col_index == 0 || col_index == x - 1)
				ft_putchar(charlist[3]);
			else
				ft_putchar(' ');
		}
		if (line_index == y - 1 && y > 1)
		{
			if (col_index == 0)
				ft_putchar(charlist[4]);
			else if (col_index == x - 1)
				ft_putchar(charlist[5]);
			else
				ft_putchar(charlist[1]);
		}
		if (col_index == x - 1)
			ft_putchar('\n');
		actual_index++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_putword("coucou\n");
	rush(1, 1);
	rush(5, 1);
	rush(1, 5);
	rush(5, 5);
	rush(15, 15);
	return (0);
}
