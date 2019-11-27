/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvan-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 17:50:15 by xvan-ham          #+#    #+#             */
/*   Updated: 2019/11/23 11:52:23 by xvan-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *haystack, int c)
{
	while (*haystack)
	{
		if (*haystack == c)
			return ((char *)haystack);
		haystack++;
	}
	if (c == 0 && !*haystack)
		return ((char *)haystack);
	return (0);
}
