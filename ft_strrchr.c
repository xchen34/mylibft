/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:45:00 by leochen           #+#    #+#             */
/*   Updated: 2023/11/08 20:36:17 by leochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s)-1;
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	while (i >= 0)
	{
		if (s[i] != (unsigned char)c)
			i --;
		else
			return ((char *)s + i);
	}
	return (NULL);
}

int	main(void)
{
	char	s[] = "abfcdefggg";
	printf("%p\n", ft_strrchr(s,'f'));
	printf("%p\n", ft_strrchr(s,'w'));
	 printf("%c\n", *(ft_strrchr(s,'w')));
	printf("%p\n", strrchr(s,'f'));
	printf("%p\n", strrchr(s,'w'));
	printf("%p\n", ft_strrchr(s,'\0'));
	printf("%p\n", strrchr(s,'\0'));
	
	return (0);
}
