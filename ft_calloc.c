/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvan-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 13:12:21 by xvan-ham          #+#    #+#             */
/*   Updated: 2019/11/09 13:42:38 by xvan-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	unsigned long	i;

	i = 0;
	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	while (i < (count * size))
		*((char *)(ptr + i++)) = 0;
	return (ptr);
}
