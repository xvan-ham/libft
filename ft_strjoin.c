/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvan-ham <xvan-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 08:57:43 by xvan-ham          #+#    #+#             */
/*   Updated: 2019/11/27 16:04:51 by xvan-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1len;
	int		s2len;
	char	*str;
	char	*wrptr;
	char	*rptr;

	if ((!s1 && !s2))
		return (0);
	s1len = s1 ? ft_strlen(s1) : 0;
	s2len = s2 ? ft_strlen(s2) : 0;
	str = malloc(s1len + s2len + 1);
	if (!str)
		return (0);
	wrptr = str;
	rptr = (char *)s1;
	while (rptr && *rptr)
		*(wrptr++) = *(rptr++);
	rptr = (char *)s2;
	while (rptr && *rptr)
		*(wrptr++) = *(rptr++);
	*wrptr = 0;
	return (str);
}
