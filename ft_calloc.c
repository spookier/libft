/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acostin <acostin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:50:44 by acostin           #+#    #+#             */
/*   Updated: 2022/11/10 15:13:09 by acostin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*mem;
	if (size == 18446744073709551615UL)
		return(0);
	mem = (void *)malloc(n * size);
	if (mem == 0)
		return (0);
	ft_bzero(mem, n * size);
	return (mem);
}