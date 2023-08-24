/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:04:40 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/08 12:10:03 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && nb > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	char	firstString[200] = "0123456789";
	char	secondString[200] = "0123456789";

	printf("before transform ;\nfirst string :\
	'%s'\nsecond string : '%s'\n",firstString, secondString);
	ft_strncat(firstString, secondString, 205);

	printf("after transform ;\nfirst string : \
	'%s'\nsecond string : '%s'\n",firstString, secondString);
}*/
