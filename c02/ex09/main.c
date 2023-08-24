#include <stdio.h>

char *ft_strcapitalize(char *str);

#include <unistd.h>

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
	char testString[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_putstring(testString);
	ft_strcapitalize(testString);
	ft_putstring(testString);
}
