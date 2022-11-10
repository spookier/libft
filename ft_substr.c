/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acostin <acostin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:01:54 by acostin           #+#    #+#             */
/*   Updated: 2022/11/10 18:08:59 by acostin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* str: The string from which to create the substring.

start: The start index of the substring in the
string ’s’.

len: The maximum length of the substring.


Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.

RETURN:
The substring.
NULL if the allocation fails. */

char *ft_substr(char const *str, unsigned int start, size_t len)
{
	char *substr;
	size_t i;

	if(len >= __SIZE_MAX__ || str == NULL)
		return(NULL);

	substr = (char *)malloc((len + 1) * sizeof(char));
	if(!substr)
		return(NULL);

	i = 0;
	while (i < len && str[start + i])
	{
		substr[i] = str[start + i];
		i++;
	}
	substr[i] = '\0';
	return(substr);
}