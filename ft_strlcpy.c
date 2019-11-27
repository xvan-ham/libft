/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvan-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 19:21:22 by xvan-ham          #+#    #+#             */
/*   Updated: 2019/11/23 11:48:10 by xvan-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned long	i;

	i = 0;
	if (!dest || !src)
		return (0);
	while (size && *(src + i) && i < size - 1 && size > 0)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	if (size)
		*(dest + i) = '\0';
	while (*(src + i))
		i++;
	return ((size_t)i);
}
