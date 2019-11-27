/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvan-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 18:09:01 by xvan-ham          #+#    #+#             */
/*   Updated: 2019/11/23 11:55:34 by xvan-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *haystack, int c)
{
	const char *start;

	start = haystack;
	while (*haystack)
		haystack++;
	while (haystack - start >= 0)
	{
		if (*haystack == c)
			return ((char *)haystack);
		haystack--;
	}
	return (0);
}
