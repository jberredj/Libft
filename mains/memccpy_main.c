#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int main ()
{
	char tab[25] = "je suis le test";
	char test2[25]  = "";
	char test3[25] = "";
	
	printf("%p\n", (char*)memccpy(test2, tab, 'x', 20));
	printf("%p\n", (char*)ft_memccpy(test3, tab, 'x', 20));
	printf("%s\n", test2);
	printf("%s\n", test3);
}
