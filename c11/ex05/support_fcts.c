/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support_fcts.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:10:03 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/24 16:31:24 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

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

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1 + *s2) != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putstr(char *str)
{
	while (*(str++))
		write(1, str - 1, 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
