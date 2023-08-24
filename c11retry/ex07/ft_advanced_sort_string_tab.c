/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:46:16 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/24 17:52:33 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strswap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

/* int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
} */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	j;

	i = 0;
	while (tab[i + 1])
	{
		j = i + 1;
		while (tab[j])
		{
			if (cmp(tab[i], tab[j]) > 0)
				ft_strswap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}

/* #include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc <= 1)
		return (0);
	argv++;
	printf("before sort :\n");
	while (i < argc - 2)
		printf("%s, ", argv[i++]);
	printf("%s\n", argv[i]);
	ft_advanced_sort_string_tab(argv, &ft_strcmp);
	i = 0;
	printf("after sort :\n");

	while (i < argc - 2)
		printf("%s, ", argv[i++]);
	printf("%s\n", argv[i]);
} */