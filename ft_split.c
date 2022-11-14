/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acostin <acostin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 23:00:52 by acostin           #+#    #+#             */
/*   Updated: 2022/11/14 17:49:30 by acostin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t find_2dsize(char const *str, char c)
{
	size_t i;
	size_t size;
	int flag;

	size = 0;
	i = 0;
	while (str[i])
	{
		flag = 0;
		if (str[i] == c)
		{
			if (str[i - 1] == c)
			{
				i++;
				flag = 1;
			}
			else
				size++;
		}
		if (flag == 0)
			i++;
	}
	return (size + 2);
}

static void allocate_space (size_t *i, size_t *sizeToAlloc, char const *str, char c)
{
	(*sizeToAlloc) = 0;

	while(str[*i] && str[*i] == c)
	{
		(*i)++;
	}
	
	//printf("i detected charset and skipped to index = %ld\n", *i);
	
	while(str[*i + *sizeToAlloc] && str[*i + *sizeToAlloc] != c)
	{
		(*sizeToAlloc)++;
	}
	
	//printf("size to allocate = %ld\n", *sizeToAlloc);
	
}

static void fill_arr(char const *str, char c, char **tab, size_t size)
{
	size_t i;
	size_t sizeToAlloc;
	size_t arrLevel;
	size_t j;
	//(void)size;

	i = 0;
	j = 0;
	arrLevel = 0;
	allocate_space(&i, &sizeToAlloc, str, c);
	tab[arrLevel] = (char *)ft_calloc((sizeToAlloc + 1), sizeof(char));
	if(!tab[arrLevel])
	{
		free(tab);
		return;
	}
	while(arrLevel <= size && str[i])
	{
		printf("created arrlvl %ld\n", arrLevel);
		j = 0;
		while(str[i] != c && str[i])
		{	
			tab[arrLevel][j] = str[i];
			j++;
			i++;
		}
		
		tab[arrLevel][j] = 0;
		arrLevel++;

		allocate_space(&i, &sizeToAlloc, str, c);
		tab[arrLevel] = (char *)ft_calloc((sizeToAlloc + 1), sizeof(char));
		if(!tab[arrLevel])
		{
			int l = 0;
			while (tab[l])
			{
				free(tab[l]);
				l++;
			}
			free(tab);
			return;
		}
	}
	//tab[arrLevel] = NULL;
}

char **ft_split(char const *str, char c)
{
	char **tab;
	size_t size;

	if (!str)
		return (NULL);
	
	size = find_2dsize(str, c);
	if (str[ft_strlen(str) - 1] == c)
		size--;

	if (str[0] == c)
		size--;
	printf("Arrays to create = %ld\n", size);
	tab = (char **)ft_calloc(size, sizeof(char *));
	if (!tab)
		return(NULL);

	fill_arr(str, c, tab, size);

	return (tab);
}