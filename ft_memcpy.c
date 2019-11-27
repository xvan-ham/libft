/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvan-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 19:16:16 by xvan-ham          #+#    #+#             */
/*   Updated: 2019/11/23 11:41:53 by xvan-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*cdst;

	cdst = (char *)dst;
	i = 0;
	if (!dst && !src)
		return (0);
	while (n && i++ < n)
		*(cdst++) = *(char *)(src++);
	return (dst);
}
