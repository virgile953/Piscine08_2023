/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:32:39 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/06 15:15:55 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *tab, int idx_first, int idx_last)
{
	int	temp;

	temp = tab[idx_first];
	tab[idx_first] = tab[idx_last];
	tab[idx_last] = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap(tab, j, j + 1);
			}
			j++;
		}
		i++;
	}
}
