#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int test = 15;
	int test2 = 0;
	int test3 = 0;
	memcpy(&test2, &test, 4);
	ft_memcpy(&test3, &test, 4);
	printf("%d\n",test2);
	printf("%d\n", test3);
}
