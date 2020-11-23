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
	bzero(&tab, 8);
	for(int i= 0; i < 150; i++)
	{
	if (i > 0 && i % 10 == 0)
			printf("\n");

		printf("%d ",tab[i]);
	}
	printf("\n");
	ft_bzero(&tab[2], 8);
	for(int i= 0; i < 150; i++)
	{
	if (i > 0 && i % 10 == 0)
			printf("\n");

		printf("%d ",tab[i]);
	}
	printf("\n");
	
}
