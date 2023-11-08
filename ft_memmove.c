/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:21:52 by leochen           #+#    #+#             */
/*   Updated: 2023/11/08 15:39:13 by leochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;

	if (dest == NULL || src == NULL)
		return (NULL);
	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	if (p_dest < p_src)
	{
		while (n -- > 0)
			*p_dest ++ = *p_src ++;
	}
	else
	{
		while (n -- > 0)
		{
			p_dest += n;
			p_src += n;
			*p_dest-- = *p_src--;
		}
	}
	return (dest);
}
