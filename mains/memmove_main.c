#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int main ()
{
	char str[150] = "Je suis le test";
	char str2[150] = "Je suis le test";
	memmove(&str[10], str, 15);
	ft_memmove(&str2[10], str2, 15);
	printf("%s\n", str);
	printf("%s\n", str2);
	memmove(str, &str[3], 4);
	ft_memmove(str2, &str2[3], 4);
	printf("%s\n", str);
	printf("%s\n", str2);
}
