#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstring(char *s)
{
	while (*s != '\0')
	{
		ft_putchar(*s);
		s++;
	}
	ft_putchar('\n');
}

int	main (void)
{
	char	testString[] = "ABDGVFHigvhdsgvuhdsbvsduvdsVSDGXVDFXVCdef";
	char	newString[800];

	newString[0] = '\0';
	ft_putstring(testString);
	ft_putstring(newString);

	ft_strncpy(newString, testString, 100);

	ft_putstring(testString);
	ft_putstring(newString);

	return 0;
}
