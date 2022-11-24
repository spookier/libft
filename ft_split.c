
#include "libft.h"
#include "stdio.h"


static	size_t	calc_2dsize(char const *str, char c)
{
	size_t size;
	size_t i;

	i = 0;
	size = 0;
	while(str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			size++;
			while(str[i] && str[i] != c)
				i++;
		}
	}
	return(size);
}

// *** ALLOC_TAB Explanation ***
// fill each tab[j] with a substring from str starting from i,
// ft_substr => fill until you find the next parameter,
// the next parameter is ft_strchr =>
// from the start of string + i, search c and once found, change the string's start position to start at c,
// MINUS string + i

// * If successfull, increment j ensuring you allocate a new array for the next iteration to repeat algorithm and store new value
// and the while loop will skip the string if there's no c found ensuring no new array will be created

// Example: string = AB/CD/EF, c = '/'
// i = 0
// 1. Create substring from str, starting from 0 until you find '/'
// 
// 


static void	alloc_tab(char const *str, char **tab, char c)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while(str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			tab[j] = ft_substr(str, i, ft_strchr(str + i, c) - (str + i));
			j++;
			while(str[i] && str[i] != c)
				i++;
		}
	}
	tab[j] = NULL;
}

char **ft_split(char const *str, char c)
{
	char **tab;
	tab = NULL;

	if(!str)
		return(NULL);
	tab = malloc(sizeof(char *) * (calc_2dsize(str, c) + 1));
	if(!tab)
		return(NULL);
	
	alloc_tab(str, tab, c);
	return(tab);
}