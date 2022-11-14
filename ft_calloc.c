/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acostin <acostin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:50:44 by acostin           #+#    #+#             */
/*   Updated: 2022/11/14 13:32:49 by acostin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*mem;

	mem = NULL;
	if (size >= 18446744073709551615UL)
		return(0);
	mem = (void *)malloc(num * size);
	if (mem == NULL)
		return (NULL);
	ft_bzero(mem, num * size);
	return (mem);
}