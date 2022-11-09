/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acostin <acostin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:56:54 by acostin           #+#    #+#             */
/*   Updated: 2022/11/09 15:10:06 by acostin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	   size_t i;

	   i = 0;
	   while(i < n)
	   {
		((unsigned char *)s)[i] = (unsigned char)0;
		i++;
	   }
}