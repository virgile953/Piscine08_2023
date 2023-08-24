/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 21:39:53 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/08 12:02:41 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	ft_strcat(firstString, secondString);

	printf("after transform ;\nfirst string : \
	'%s'\nsecond string : '%s'\n",firstString, secondString);
}*/
