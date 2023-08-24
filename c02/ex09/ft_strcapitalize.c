/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 18:51:12 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/08 13:49:40 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_str_to_lower(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
}

int	ft_char_is_alphanumeric(char c, int only_alpha)
{
	if (c >= '0' && c <= '9' && only_alpha == 0)
		return (1);
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	idx;

	idx = 0;
	ft_str_to_lower(str);
	if (ft_char_is_alphanumeric(str[0], 1))
	{
		str[0] -= 32;
		idx++;
	}
	while (str[idx] != '\0')
	{
		if (ft_char_is_alphanumeric(str[idx -1], 0) == 0)
		{
			if (ft_char_is_alphanumeric(str[idx], 1) == 1)
				str[idx] -= 32;
		}
		idx++;
	}
	return (str);
}
/*#include <unistd.h>

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
	char testString[] = "salut, comment tu vas ? 42mots quarante-deux; 
	cinquante+et+un";
	//char testString[] = "42Coucou, test d'une string+un mot";

	ft_putstring(testString);
	ft_strcapitalize(testString);
	ft_putstring(testString);
}
*/
