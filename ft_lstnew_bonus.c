/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvan-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 16:28:16 by xvan-ham          #+#    #+#             */
/*   Updated: 2019/11/19 16:50:51 by xvan-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *baby;

	if (!(baby = (t_list *)malloc(sizeof(t_list))))
		return (0);
	baby->content = (void *)content;
	baby->next = 0;
	return (baby);
}
