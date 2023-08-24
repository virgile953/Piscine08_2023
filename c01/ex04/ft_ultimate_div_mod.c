/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:27:20 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/04 11:32:06 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result;
	int	remainder;

	if (*b == 0)
		return ;
	remainder = *a % *b;
	result = (*a - remainder) / *b;
	*a = result;
	*b = remainder;
}
