/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:47:34 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/14 13:00:46 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	length = 0;
	i = 0;
	while (dest[length] && length < size)
		length++;
	while (src[i] && size && length + i < size - 1)
	{
		dest[length + i] = src[i];
		i++;
	}
	if (length < size)
		dest[length + i] = 0;
	i = 0;
	while (src[i])
		i++;
	return (length + i);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>

int	main(void)
{
	char	firstString[200] = "01";
	char	sfirstString[200] = "01";
	char	secondString[200] = "0123456789";
	char	ssecondString[200] = "0123456789";

	printf("before transform ;\nfirst string :\
	'%s'\nsecond string : '%s'\n",firstString, secondString);
	unsigned int coucou = ft_strlcat(firstString, secondString, 11);
	printf("after transform ;\n\
	first string : '%s'\n\
	second string : '%s'\n\
	",firstString, secondString);

	printf("size total = %d\n", coucou);


	int plop = strlcat(sfirstString, ssecondString, 11);
	printf("strlcat transform ;\n\
	first string : '%s'\n\
	second string : '%s'\n\
	",sfirstString, ssecondString);
	printf("size total = %d\n", plop);
}*/
