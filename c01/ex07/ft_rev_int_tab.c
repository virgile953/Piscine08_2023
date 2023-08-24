/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:48:24 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/06 14:28:28 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *tab, int idx_first, int idx_last)
{
	int	temp;

	idx_last--;
	temp = *(tab + idx_first);
	*(tab + idx_first) = *(tab + idx_last);
	*(tab + idx_last) = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	index_to_swap;
	int	mid;

	index_to_swap = 0;
	mid = size / 2;
	while (size > mid)
	{
		ft_swap(tab, index_to_swap, size);
		size--;
		index_to_swap++;
	}
}
