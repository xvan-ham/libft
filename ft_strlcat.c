/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvan-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 20:00:13 by xvan-ham          #+#    #+#             */
/*   Updated: 2019/11/23 11:49:15 by xvan-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*(dest + i) && i < size)
		i++;
	if (!*(dest + i))
	{
		while (*(src + j) && ((i + j) < size - 1))
		{
			*(dest + i + j) = *(src + j);
			j++;
		}
		*(dest + i + j) = 0;
	}
	while (*(src + j))
		j++;
	if (size - 1 < i || size == 0)
		return (size + j);
	return ((size_t)(i + j));
}
