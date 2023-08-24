/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:29:57 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/19 15:11:19 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && n > 0)
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	int	res;

	if (argc < 3) {
		fprintf(stderr, "Usage: %s <str1> <str2> [<len>]\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if (argc == 3)
		res = strcmp(argv[1], argv[2]);
	else
		res = strncmp(argv[1], argv[2], atoi(argv[3]));
	if (res == 0) {
		printf("<str1> and <str2> are equal");
		if (argc > 3)
			printf(" in the first %d bytes\n", atoi(argv[3]));
		printf("\n");
	} else if (res < 0) {
		printf("<str1> is less than <str2> (%d)\n", res);
	} else {
		printf("<str1> is greater than <str2> (%d)\n", res);
	}
	exit(EXIT_SUCCESS);
}
*/
