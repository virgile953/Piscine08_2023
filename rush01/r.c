/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgermana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:07:06 by mgermana          #+#    #+#             */
/*   Updated: 2023/08/05 18:48:22 by mgermana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h> // for malloc
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

//c'est moche mais ca tiens sur une ligne c'est swag
void	ft_putstr(char *str)
{
	while (*(str++))
		ft_putchar (*(str - 1));
}

struct	s_board {
	int	size;
	int	*up;
	int	*left;
	int	*right;
	int	*down;
};

void	generate_combinations(int comb[], int temp[], int index, int taille)
{
	int	i;
	int	j;
	int	nb;

	i = 0;
	nb = taille;
	if (index == taille)
	{
		while (i < taille)
		{
			nb = nb * 10 + temp[i];
			i++;
		}
		ft_putchar (nb + '0');
		ft_putchar('\n');
	}
	else
	{
		while (i < taille)
		{
			j = 0;
			while (j < index)
			{
				if (temp[j] == comb[i])
					break ;
				j++;
			}
			if (j == index)
			{
				temp[index] = comb[i];
				generate_combinations (comb, temp, index + 1, taille);
			}
			i++;
		}
	}
}

//useless for now
int	*gen_comb(int size, int nb)
{
	int	i;
	int	*return_tab;

	i = 0;
	return_tab = malloc (size * nb * sizeof (int));
	while (i < nb)
	{
		i++;
	}
}

int	get_col_nbr(int *comb, int size)
{
	int	i;
	int	sum_col;
	int	last_size;

	i = 0;
	sum_col = 0;
	last_size = 0;
	//pour verif le point de vue d'en haut
	while (i < size)
	{
		if (last_size > comb[i] || last_size == size)
			i++;
		else {
			sum_col++;
			last_size = comb[i];
			i++;
		}
	}
	ft_putstr ("vu d'en haut : ");
	ft_putchar (sum_col + '0');
	ft_putchar ('\n');
	return (sum_col);
}

int	get_line_nbr(int *comb, int size)
{
	int	i;
	int	sum_col;
	int	last_size;
	//pour verif le point de vue d'en bas
	last_size = 0;
	sum_col = 0;
	i = size - 1;
	while (i >= 0)
	{
		if (last_size > comb[i] || last_size == size)
		{
			i--;
			continue ;
		}
		sum_col++;
		last_size = comb[i];
		i--;
	}
	ft_putstr ("vu d'en bas : ");
	ft_putchar (sum_col + '0');
	ft_putchar ('\n');
}

int	get_tab_size(char *tab)
{
	int	i; // taille de la chaine du tableau
	int	j; // taille x/y du tableau

	i = 0;
	j = 1;
	while (*tab) // get le nombre de chiffres dans le tableau
	{
		if (*tab != ' ')
			i++;
		tab++;
	}

	while (j <= 9)
	{
	/*
	si tab de 5 par ex : 
	i = 5 * 4 donc 20.
	si (i / j)== 4 (pour les quatres cotes de mon carre)ET i % j == 0 (pour etre sur que je n'ai pas de reste)
*/
		if (i / j == 4 && i % j == 0)
		{
			return (j); // si j'ai bien trouve la taille du tableau a generer
		}
		j++;
	}
	return (0);
}
/* fonction qui prend le tableau de chars envoye en params et
retourne un tableau d'ints avec la bonne allocation de memoire necessaire */

int	*ft_parse_tab(char *tab_str, int size)
{
	int	j;
	int	*tab;
	int	k;

	k = 0;
	j = 0;
	if (size == 0)
		return (0);

	tab = malloc (size * 4 * sizeof (int));
	while (tab_str[k])
	{
		if (tab_str[k] != ' ')
		{
			tab[j] = tab_str[k] - '0';
			j++;
		}
		k++;
	}
	return (tab);
}

void	ft_print_board(struct s_board tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	//print first line
	ft_putstr (" ");
	while (i < size)
	{
		ft_putchar (tab.up[i] + '0');
		ft_putchar (' ');
		i++;
	}
	ft_putstr ("\n");
	i = 0;
	while (i < size * size - 2) // y
	{
		while (j < size) // x
		{
			if (j == 1)
				ft_putchar (tab.left[i] + '0');
			else if (j == size - 1)
			{
				ft_putchar (tab.right[i] + '0');
				ft_putchar ('\n');
				j = 0;
			}
			else
				ft_putchar (' ');
			j++;
			i++;
		}
		i++;
	}
	i = 0;
	while (i < size) // last line
	{
		ft_putchar (tab.up[i] + '0');
		i++;
	}
}

struct s_board init_board(int size, int *tab)
{
	int				i;
	int				j;
	struct s_board	board;

	i = 0;
	j = 0;
	board.up = malloc (size * sizeof (int));
	board.left = malloc (size * sizeof (int));
	board.right = malloc (size * sizeof (int));
	board.down = malloc (size * sizeof (int));
	if (board.up == 0 || board.right == 0 || board.left == 0 || board.down == 0)
	{
		ft_putstr ("oulala c'est terrible\n"); // error check si malloc passe pas
	}
	while (i < size)
	{
		board.up[j] = tab[i];
		i++;
		j++;
	}
	j = 0;
	while (i < size * 2)
	{
		board.down[j] = tab[i];
		i++;
		j++;
	}
	j = 0;
	while (i < size * 3)
	{
		board.left[j] = tab[i];
		i++;
		j++;
	}
	j = 0;
	while (i < size * 4)
	{
		board.right[j] = tab[i];
		i++;
		j++;
	}
	board.size = size;
	return (board);
}

int	main(int argc, char **argv)
{
	int				size;
	struct s_board	board;
	int				*tab;

	size = get_tab_size ("4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2");
	*tab = ft_parse_tab ("4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2", size);
	board = init_board (size, tab);
	ft_print_board (board, size);
	// printf ("%d\n", get_col_nbr (tab, size, 4, 4));
	return (0);
}