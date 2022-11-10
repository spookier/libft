/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acostin <acostin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:02:03 by acostin           #+#    #+#             */
/*   Updated: 2022/11/10 10:30:13 by acostin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void * pointer1, const void * pointer2, size_t size)
{
	size_t i;
	char *p1;
	char *p2;
	
	p1 = (char *)pointer1;
	p2 = (char *)pointer2;
	i = 0;
	while(i < size)
	{
		if(p1[i] == p2[i])
			i++;
		else
			return(p1 - p2);
	}
	return(0);
}