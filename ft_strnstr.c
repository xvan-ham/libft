/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvan-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:13:18 by xvan-ham          #+#    #+#             */
/*   Updated: 2019/11/23 11:59:02 by xvan-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t size)
{
	size_t i;

	if (!*needle)
		return ((char *)haystack);
	if (!size)
		return (0);
	while (*haystack && size-- > 0)
	{
		i = 0;
		while (*(needle + i) && i < size + 1)
		{
			if (*(needle + i) != *(haystack + i))
				break ;
			i++;
		}
		if (!*(needle + i))
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
