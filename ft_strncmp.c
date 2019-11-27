/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvan-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:54:34 by xvan-ham          #+#    #+#             */
/*   Updated: 2019/11/23 12:02:47 by xvan-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	if (n < 1)
		return (0);
	while (*(p1 + i) != '\0' && i < n - 1 &&
			*(p2 + i) != '\0' && *(p1 + i) == *(p2 + i))
		i++;
	return (*(p1 + i) - *(p2 + i));
}
