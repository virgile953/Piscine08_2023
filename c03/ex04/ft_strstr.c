/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:33:07 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/15 18:14:22 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j] && to_find[j])
				j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	char	firstString[200] = "on m'appelle l'ovni";
	char	secondString[200] = "appe";

	char	String[200] = "on m'appelle l'ovni";
	char	String2[200] = "ppe";

	printf("before transform ;\nfirst string : '%s'\nsecond string :\
	'%s'\n", String, String2);
	

	char *coucou = ft_strstr(String, String2);

	printf("after transform ;\nfirst string : '%s'\nsecond string :\
	'%s'\n", String, coucou);
}
*/
