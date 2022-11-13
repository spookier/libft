/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acostin <acostin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 23:14:46 by acostin           #+#    #+#             */
/*   Updated: 2022/11/10 23:14:47 by acostin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t size;
	size_t i;
	size_t j;
	char *finalStr;

	size = 1 + ft_strlen(s1) + ft_strlen(s2);
	finalStr = (char *)ft_calloc(size, sizeof(char));
	if(!finalStr)
		return(NULL);

	i = 0;
	while (s1[i])
	{
		finalStr[i] = s1[i];
		i++;
	}	
	j = 0;
	while (s2[j])
	{
		finalStr[i++] = s2[j++];
	}
	return(finalStr);
}