/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvan-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 19:14:40 by xvan-ham          #+#    #+#             */
/*   Updated: 2019/11/19 20:01:39 by xvan-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*lst2;
	t_list	*lst2n;

	if (!lst)
		return (0);
	if (!(lst2 = ft_lstnew((*f)(lst->content))))
		return (0);
	start = lst2;
	lst = lst->next;
	while (lst)
	{
		if (!(lst2n = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&start, del);
			return (0);
		}
		lst2->next = lst2n;
		lst2 = lst2n;
		lst = lst->next;
	}
	lst2->next = 0;
	return (start);
}
