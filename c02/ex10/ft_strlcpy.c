/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:07:05 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/09 15:24:30 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	return_size;
	int				i;

	i = strlen(src);
	size--;
	return_size = 0;
	if (size == 0)
	{
		return (i);
	}
	while (*src != '\0' && size > 0)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
		return_size++;
	}
	*dest = '\0';
	return (i);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <bsd/string.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstring(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int	main (void)
{
	char srcString[] = "salut, comment tu vas ? 42mots";
	char dstString[50];

	ft_putstring(srcString);
	ft_putstring(dstString);
	printf("lenght returned : %d\n", ft_strlcpy(dstString, srcString, 5));
	ft_putstring(srcString);
	ft_putstring(dstString);

	char testString[50];
	printf("lenght returned : %ld\n", strlcpy(testString, srcString, 5));
	ft_putstring(testString);
}*/
