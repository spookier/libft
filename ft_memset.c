
/* The memset() function fills the first n bytes of the memory area
pointed to by s with the constant byte c.

The memset() function returns a pointer to the memory area s. */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}