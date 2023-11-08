/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:24:34 by leochen           #+#    #+#             */
/*   Updated: 2023/11/08 20:25:07 by leochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*s != (unsigned char)c)
			s ++;
		else
			return ((char *)s);
	}
	return (NULL);
}

/*int	main(void)
{
	char	s[] = "abcdefggg";
	printf("%p\n", ft_strchr(s,'g'));
	printf("%p\n", ft_strchr(s,'w'));
	printf("%p\n", strchr(s,'g'));
	printf("%p\n", strchr(s,'w'));
	printf("%p\n", ft_strchr(s,'\0'));
	printf("%p\n", strchr(s,'\0'));
	
	return (0);
}*/
