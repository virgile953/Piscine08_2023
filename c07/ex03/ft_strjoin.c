/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 07:15:42 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/22 03:01:04 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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
/*
int	main(int argc, char **argv)
{
	char	*returned;

	// (void)argc;
	returned = ft_strjoin(argc, argv, "|===|");
	printf("%s\n", returned);
	free(returned);
	return (0);
} */
