/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvan-ham <xvan-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 19:03:24 by xvan-ham          #+#    #+#             */
/*   Updated: 2019/11/27 19:17:24 by xvan-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s || (str = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	if (start <= ft_strlen(s))
	{
		while (i < len && s[start + i])
		{
			str[i] = s[start + i];
			i++;
		}
	}
	str[i] = 0;
	return (str);
}
