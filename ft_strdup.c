/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:13:39 by leochen           #+#    #+#             */
/*   Updated: 2023/11/10 15:06:14 by leochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//#include <unistd.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	size_t	i;

	i = 0;
	d = (char *)malloc(ft_strlen(s) + 1);
	if (d == NULL)
		return (NULL);
	while (*s)
	{
		d[i] = s[i];
		i ++;
	}
	d[i] = '\0';
	return (d);
}
