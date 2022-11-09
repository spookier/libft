#include <stdio.h>

#include "libft.h"

int main(void)
{
        int value = 444;
        char c = 'A';
        
        char *str = malloc(sizeof(char) * 5);
        char *str2 = malloc(sizeof(char) * 5);
        str2[0] = 'A';
        str2[1] = 'B';
        str2[2] = 'C';
        
        ft_memcpy(str, str2, 3);
        printf("original: %s\n", str2);

        printf("copied: %s\n", str);

}