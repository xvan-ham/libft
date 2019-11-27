/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xvan-ham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 18:55:26 by xvan-ham          #+#    #+#             */
/*   Updated: 2019/11/22 12:55:51 by xvan-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*el;
	t_list	*nxtel;

	if (!lst || !(*lst))
		return ;
	el = *lst;
	while (el)
	{
		(*del)(el->content);
		nxtel = el->next;
		free(el);
		el = nxtel;
	}
	*lst = 0;
}
