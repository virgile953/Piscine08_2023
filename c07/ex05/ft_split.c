/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 20:23:01 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/23 17:54:41 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_char_count(char *str, char *charset, int index)
{
	int	count;

	count = 0;
	while (ft_is_charset(str[index], charset) && str[index])
		index++;
	while (!ft_is_charset(str[index], charset) && str[index])
	{
		index++;
		count++;
	}
	return (count);
}

int	ft_count_word(char *str, char *charset)
{
	int	i;
	int	wordcount;

	i = 0;
	wordcount = 0;
	while (str[i])
	{
		if (str[i] && !ft_is_charset(str[i], charset))
		{
			wordcount++;
			while (str[i] && !ft_is_charset(str[i], charset))
				i++;
		}
		else
			i++;
	}
	return (wordcount);
}

char	*ft_strndup(char *str, int index, int n)
{
	int		i;
	char	*dup;

	i = 0;
	dup = malloc(sizeof(char) * (n + 1));
	if (!dup)
		return (NULL);
	while (str[index] && i < n)
	{
		dup[i] = str[index + i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		wordcount;
	char	**splitter;

	i = 0;
	j = 0;
	wordcount = ft_count_word(str, charset);
	splitter = malloc(sizeof(char *) * (wordcount + 1));
	if (!splitter)
		return (NULL);
	while (str[i] && j < wordcount)
	{
		if (!ft_is_charset(str[i], charset) && str[i])
		{
			splitter[j] = ft_strndup(str, i, ft_char_count(str, charset, i));
			if (!splitter[j++])
				return (NULL);
			while (!ft_is_charset(str[i], charset) && str[i])
				i++;
		}
		i++;
	}
	splitter[j] = 0;
	return (splitter);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		char **strs;
		int i;

		i = 0;
		strs = ft_split(argv[1], argv[2]);
		printf("%d\n", ft_count_word(argv[1], argv[2]));
		while (strs[i])
		{
			printf("%s\n", strs[i]);
			i++;
		}
	}
} */
