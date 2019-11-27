/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvan-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 19:57:07 by xvan-ham          #+#    #+#             */
/*   Updated: 2019/11/09 14:07:04 by xvan-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

void	*ft_memccpy(void *restrict dst,
		const void *restrict src, int c, size_t n)
{
	unsigned char *csrc;
	unsigned char *cdst;

	csrc = (unsigned char *)src;
	cdst = (unsigned char *)dst;
	if (!n)
		return (0);
	while (n-- > 0 && *csrc != (unsigned char)c)
		*(cdst++) = *(csrc++);
	if (*csrc == (unsigned char)c)
	{
		*(cdst++) = *(csrc++);
		return ((void *)cdst);
	}
	return (0);
}
