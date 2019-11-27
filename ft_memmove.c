/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvan-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 20:41:42 by xvan-ham          #+#    #+#             */
/*   Updated: 2019/11/15 11:11:38 by xvan-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*csrc;
	unsigned char	*cdst;

	if (!dst && !src)
		return (0);
	if (!len)
		return (dst);
	csrc = (src > dst) ? (unsigned char *)src : (unsigned char *)src + len - 1;
	cdst = (src > dst) ? (unsigned char *)dst : (unsigned char *)dst + len - 1;
	while (len--)
	{
		*cdst = *csrc;
		(src > dst) ? csrc++ : csrc--;
		(src > dst) ? cdst++ : cdst--;
	}
	return (dst);
}
