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

void	ft_display(int bool_expression, char char_to_print)
{
	if (bool_expression)
		ft_putchar(char_to_print);
}

void	rush(int x, int y)
{
	char	charlist[6];
	int		line;
	int		col;
	int		actual_index;

	ft_def_chars(charlist);
	actual_index = 0;
	while (actual_index < (x * y))
	{
		line = actual_index / x;
		col = actual_index % x;
		ft_display((col + line == 0), 'o');
		ft_display((col == x -1 && line == 0 && x > 1), 'o');
		ft_display((col == 0 && line == y - 1 && line > 0), 'o');
		ft_display((actual_index + 1 == (x * y) && line > 0 && col > 0), 'o');
		ft_display((line == y - 1 && col != 0 && col != x - 1), '-');
		ft_display((line == 0) && (col > 0 && col < x - 1), '-');
		ft_display(((col == 0) || (col == x - 1)) && (line < y - 1 && line > 0), '|');
		ft_display((col > 0 && col < x - 1) && (line > 0 && line < y - 1), ' ');
		ft_display((col == x - 1), '\n');
		actual_index++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_putword(argv[1]);
		ft_putchar('\n');
	}
	rush(3, 3);
	rush(1, 1);
	rush(5, 1);
	rush(1, 5);
	rush(5, 5);
	rush(15, 15);
	return (0);
}
