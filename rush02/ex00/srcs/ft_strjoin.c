/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 17:26:36 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/20 23:08:51 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	get_malloc_size(int size, char **strs, char *sep)
{
	int	i;
	int	result;

	if (size == 0)
		return (1);
	i = 0;
	result = 0;
	while (i < size)
		result += ft_strlen(strs[i++]);
	result += ft_strlen(sep) * (size - 1);
	return (result + 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	destlen;

	i = 0;
	destlen = ft_strlen(dest);
	while (src[i])
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;

	result = malloc(get_malloc_size(size, strs, sep) * sizeof(char));
	if (!result)
		return (NULL);
	result[0] = 0;
	if (size == 0)
		return (result);
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i != size - 1)
			ft_strcat(result, sep);
		i++;
	}
	result[ft_strlen(result)] = 0;
	return (result);
}

int	count_stuff(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}
