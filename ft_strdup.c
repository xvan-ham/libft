/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvan-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 18:17:30 by xvan-ham          #+#    #+#             */
/*   Updated: 2019/11/13 18:50:02 by xvan-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*ptr;

	if (!(str = malloc(ft_strlen((char *)s1) + 1)))
		return (0);
	ptr = str;
	while (*s1)
		*(ptr++) = *(s1++);
	*ptr = 0;
	return (str);
}
