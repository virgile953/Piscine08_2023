/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:33:06 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/05 17:41:48 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putword(char *c)
{
	while (*c != '\0')
	{
		ft_putchar(*c);
		c++;
	}
}

void ft_def_chars(char *list)
{
	*list = 'o'; // upper left
	list++;
	*list = '-'; // upper normal
	list++;
	*list = 'o'; //upper right
	list++;
	*list = '|'; // left&right normal
	list++;
	*list = 'o'; //lower left
	list++;
	*list = 'o'; // lower right
	return ;
}


void	rush(int x, int y)
{
	char	charlist[6];
	int		maxIndex;
	int		minx;
	int		maxx;
	int		miny;
	int		maxy;
	int		actualIndex;

	actualIndex = 0;
	maxIndex = x * y;
	minx = 0;
	maxx = x;
	miny = 0;
	maxy = y;

	ft_def_chars(charlist);
	while (actualIndex < maxIndex - 1)
	{
		if (actualIndex == 0)
		{
			ft_putchar(charlist[0]);
			actualIndex++;
			continue ;
		}
		if (actualIndex == maxx)
		{
			ft_putchar(charlist[2]);
			actualIndex++;
			continue ;
		}
		if (actualIndex < maxx) //si je suis en ligne 1
		{
			ft_putchar(charlist[1]);
		}
		if ((actualIndex < maxy && actualIndex > 0) && (actualIndex % 8 > 0 && actualIndex % 8 < maxx)) //si je suis au millieu a gauche
		{
			ft_putchar(' ');
			actualIndex++;
			continue;
		}
		if (actualIndex % maxy != 0 && actualIndex % maxy != maxy -1)
			ft_putchar(charlist[3]);

		actualIndex++;
	}
	ft_putchar('\n');
}
int	main(int argc, char **argv)
{

	if (argc > 1)
	{
		ft_putword("coucou\n");
	}
	rush(8, 4);
	rush(1, 4);
	rush(4, 1);
	rush(1, 1);
	return (0);
}
