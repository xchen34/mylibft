/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:38:47 by leochen           #+#    #+#             */
/*   Updated: 2023/11/10 18:50:46 by leochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned char	*s2;
	unsigned char	*p;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	s2 = (unsigned char *)malloc(ft_strlen(s1) - ft_strlen(s2) + 1);
	if (s2 == NULL)
		return (NULL);
	p = ft_strnstr(s1, set, ft_strlen(s1));
	while (*s1 && &(s1[j]) < p) 
		s2[i++] = s1[j++];
	while (&(s1[j]) >= p && &(s1[j]) <= (p + ft_strlen(set) - 1))
		s1[j] ++;
	while(*s1 && &(s1[j]) > (p + ft_strlen(set) - 1))
		s2[i++] = s1[j++];
	s2[i] = '\0';
	return (s2);
}

