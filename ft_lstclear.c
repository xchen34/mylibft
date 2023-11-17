/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:15:37 by leochen           #+#    #+#             */
/*   Updated: 2023/11/17 18:11:22 by leochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del || !*lst)
		return;
	while (*lst)
	{
		temp = *lst;
		(*del)(temp->content);
		free(temp);
		*lst = (*lst)->next;
	}
	*lst = NULL;
}
