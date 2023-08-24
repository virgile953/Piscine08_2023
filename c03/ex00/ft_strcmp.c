/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:10:39 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/08 13:01:20 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1 + *s2) != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>
int main(int argc, char *argv[])
{
	int res;

	res = ft_strcmp(argv[1], argv[2]);
	if (res == 0) {
		printf("<str1> and <str2> are equal");
	printf("\n");
	} else if (res < 0) {
		printf("<str1> is less than <str2> (%d)\n", res);
	} else {
		printf("<str1> is greater than <str2> (%d)\n", res);
	}
	return (0);
}
*/
