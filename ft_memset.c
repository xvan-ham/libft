/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvan-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:14:57 by xvan-ham          #+#    #+#             */
/*   Updated: 2019/11/23 11:18:23 by xvan-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *d, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*dest;

	dest = (unsigned char *)d;
	i = 0;
	while (i < len)
		*(dest + i++) = c;
	return ((void *)d);
}
