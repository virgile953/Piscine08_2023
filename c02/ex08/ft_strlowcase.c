/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 18:47:58 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/07 19:20:41 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_upper(char c)
{
	if (c < 'A' || c > 'Z')
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (ft_is_upper(str[idx]) == 1)
		{
			str[idx] += 32;
		}
		idx++;
	}
	return (str);
}
