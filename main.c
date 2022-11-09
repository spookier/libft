#include <stdio.h>

#include "libft.h"

int main(void)
{
        int value = 444;
        char c = 'A';
        
        //char *src = malloc(sizeof(char) * 3);
        //char *string = malloc(sizeof(char) * 10);

       printf("\nTest de ft_strlcpy :\n");
	char *c1 = "source";
	char c2[] = "destination";
	char c3[] = "destination";
        
	printf("6, sour : %lu, %s\n", ft_strlcpy(c2, c1, 5), c2);
	printf("6, source : %lu, %s\n", ft_strlcpy(c3, c1, 8), c3);
}