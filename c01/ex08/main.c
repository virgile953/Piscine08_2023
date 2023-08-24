#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	displayTab(int *tab, int size)
{
	
	for(int i = 0; i < size; i++)
	{
		printf("%d ",tab[i]);
	}
	printf("\n");
}


int	main(void)
{
	int tabTest[] = {99, 5, 0, -42, 12, 35, 50, 45};
	
	int size = sizeof(tabTest) / sizeof(tabTest[0]);
	displayTab(tabTest, size);
	ft_sort_int_tab(tabTest, size);
	displayTab(tabTest, size);
	return 0;
}
