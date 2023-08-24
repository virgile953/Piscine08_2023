/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 07:15:42 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/19 19:59:38 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	if (!str[0])
		return (0);
	i = 0;
	while (*(++str))
		i++;
	return (i + 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*empty_string(void)
{
	char	*ret;

	ret = malloc(sizeof(char));
	if (!ret)
		return (NULL);
	ret[0] = '\0';
	return (ret);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		size_total;
	int		i;
	char	*return_string;

	if (size < 1)
		return (empty_string());
	i = 0;
	size_total = 0;
	while (i++ < size)
		size_total += ft_strlen(strs[i - 1]);
	size_total = size_total + ((size - 1) * ft_strlen(sep));
	return_string = malloc((size_total + 1) * sizeof(char));
	if (!return_string)
		return (NULL);
	i = 0;
	while (i++ < size - 1)
	{
		ft_strcat(return_string, strs[i - 1]);
		ft_strcat(return_string, sep);
	}
	ft_strcat(return_string, strs[i - 1]);
	return (return_string);
}

/* int	main(int argc, char **argv)
{
	char	*returned;

	returned = ft_strjoin(argc, argv, "---");
	printf("%s\n", returned);
	return (0);
}
 */