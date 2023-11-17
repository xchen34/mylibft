/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:48:13 by leochen           #+#    #+#             */
/*   Updated: 2023/11/17 16:03:26 by leochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfth.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list	*last;
	size_t	i;
	
	if (lst == NULL)
		return (NULL);
	last = lst;
	i = ft_lstsize(lst);
	while (i > 0)
	{
		lst = lst->next;
		i--;
	}
	last = lst;
	return (last);
}
