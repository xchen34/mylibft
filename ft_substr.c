/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:31:46 by leochen           #+#    #+#             */
/*   Updated: 2023/11/06 16:49:07 by leochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	unsigned int	i;

	i = 0;
	if (start >= ft_strlen(s))
		return (NULL);
	sub = malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	while (i < len && *s)
	{
		sub[i] = s[start];
		i ++;
		start ++;
	}
	sub[i] = '\0';
	return (sub);
}

int	main(void)
{
	char	*sub;
	int	i;

	i = 0;
	sub = ft_substr("abcdef", 1, 4);
	while (*sub)
	{
		printf("%c\n", sub[i]);
		i ++;
	}
	return (0);
}
