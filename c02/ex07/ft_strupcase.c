/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 18:39:06 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/07 19:20:17 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_lower(char c)
{
	if (c < 'a' || c > 'z')
		return (0);
	return (1);
}

char	*ft_strupcase(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (ft_is_lower(str[idx]) == 1)
		{
			str[idx] -= 32;
		}
		idx++;
	}
	return (str);
}
