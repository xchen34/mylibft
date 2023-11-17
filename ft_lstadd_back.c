/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:11:36 by leochen           #+#    #+#             */
/*   Updated: 2023/11/17 16:35:03 by leochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!lst || !new)
		return;
	if(*lst == NULL)
	{
		*lst = new;
		return;
	}
	current = *lst;
	while (current->next != NULL)
		current = current->next;
	current>next = new;
	new->next = NULL;	
}
