/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acostin <acostin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:14:34 by acostin           #+#    #+#             */
/*   Updated: 2022/11/10 17:09:02 by acostin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char *newStr;
	size_t size;

	newStr = NULL;
	size = ft_strlen(str);
	if (!str)
		return(0);
	newStr = (char *)malloc((size + 1) * sizeof(char));
	if (!newStr)
		return(0);
	newStr[size] = 0;
	ft_strlcpy(newStr, str, size + 1);
	return (newStr);
}
