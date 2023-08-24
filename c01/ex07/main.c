#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

void displayTab(int *tab, int size)
{
	
	for(int i = 0; i < size; i++)
	{
		printf("%d ",tab[i]);
	}
	printf("\n");
}


int	main(void)
{
	int tabTest[] = {5, 4, 3, 2, 1, 0, -1, -2, -3, -4};
	
	int size = sizeof(tabTest) / sizeof(tabTest[0]);
	displayTab(tabTest, size);
	ft_rev_int_tab(tabTest, size);
	displayTab(tabTest, size);
	return 0;
}
