/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbarbera <vbarbera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 18:20:00 by vbarbera          #+#    #+#             */
/*   Updated: 2023/08/19 16:31:29 by vbarbera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*new_string;

	i = 0;
	new_string = malloc((ft_strlen(src)+ 1) * sizeof(char));
	if (!new_string)
		return (NULL);
	while (src[i])
	{
		new_string[i] = src[i];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}

/* #include <string.h>

int	main(void)
{
	printf("%s\n", strcmp(strdup("Test"), ft_strdup("Test")) == 0 ?
			"OK" :
			"Fail");
	printf("%s\n", strcmp(strdup("484df41hdy1h111fs1fsd15sf15sdf11\
5d15fdgs15gfd4sg1615df156g1515g4erg4561esg156gr15156g15eg15eg15e51e\
51g1515ge156e156eg156e15156ge516e1551eg51eg15g1551eg15e516eg15e15eg\
1515e55eg51e15e51g5151eg15eg1515egr515151erg51er51e51e551ee5eg51egr\
51er51er5er5eg51e5r1e51rg5egr5eg51erg5e1r51e6rg51egr516ee5g15e1g5e\
1g5e1g51ger51egr51erg55reg5er55er55"), ft_strdup("484df41hdy1h111f\
s1fsd15sf15sdf115d15fdgs15gfd4sg1615df156g1515g4erg4561esg156gr1515\
6g15eg15eg15e51e51g1515ge156e156eg156e15156ge516e1551eg51eg15g1551e\
g15e516eg15e15eg1515e55eg51e15e51g5151eg15eg1515egr515151erg51er51e\
51e551ee5eg51egr51er51er5er5eg51e5r1e51rg5egr5eg51erg5e1r51e6rg51eg\
r516ee5g15e1g5e1g5e1g51ger51egr51erg55reg5er55er55")) == 0 ?
			"OK" :
			"Fail");
} */

/* int	main(int argc, char **argv)
{
	char	*str2;

	str2 = ft_strdup(argv[1]);
	printf("la chaine cree par strdup est : %s\n", str2);
	return (69);
}
 */