/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acostin <acostin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 07:14:37 by acostin           #+#    #+#             */
/*   Updated: 2022/11/14 23:12:22 by acostin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
This is the ft_strlcat function from the C standard library. 

The function takes in three arguments - dst (destination string), src (source string), and size (maximum size of the destination string). 

The first thing the function does is check if the src and dst pointers are valid. If not, it returns 0. 

Then, it initializes two variables - i and j. i keeps track of the number of characters in the destination string, while j keeps track of the number of characters in the source string. 

The function then enters a while loop. The objective of the while loop is to reach the end of the destination string (which is indicated by a '\0' character) or the size limit, whichever comes first. 

If the size limit is reached before the end of the destination string is reached, it means that there is not enough space in the destination string to accommodate the source string. In this case, the function returns the total length of the destination string and the source string. 

Otherwise, if the end of the destination string is reached before the size limit, the function continues and enters another while loop. The objective of this while loop is to copy characters from the source string into the destination string until the null character is reached. 

The function then appends a null character to the end of the destination string and returns the total length of the destination string and the source string.

*/


size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	if (!src || !dst)
		return (0);
	i = -1;
	while (++i < size && *dst)
	{
		dst++;
	}
	if (i == size)
		return (i + ft_strlen(src));
	j = -1;
	while (src[++j])
		if (j < size - i - 1)
			*dst++ = src[j];
	*dst = '\0';
	return (i + j);
}