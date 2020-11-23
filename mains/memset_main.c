#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int tab[150];
	for(int i= 0; i < 150; i++)
	{
		tab[i]=15;
	}
	for(int i= 0; i < 150; i++)
	{
	if (i > 0 && i % 10 == 0)
			printf("\n");

		printf("%d ",tab[i]);
	}

	printf("\n");
	memset(&tab, 0, 8);
	for(int i= 0; i < 150; i++)
	{
	if (i > 0 && i % 10 == 0)
			printf("\n");

		printf("%d ",tab[i]);
	}
	printf("\n");
	ft_memset(&tab[2], 0, 8);
	for(int i= 0; i < 150; i++)
	{
	if (i > 0 && i % 10 == 0)
			printf("\n");

		printf("%d ",tab[i]);
	}
	printf("\n");
	
}
