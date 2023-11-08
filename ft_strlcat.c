/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:18:25 by leochen           #+#    #+#             */
/*   Updated: 2023/11/08 17:49:20 by leochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<stdio.h>
#include "libft.h"

/*size_t ft_strlen(const char *str)
{
    size_t len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = 0;
	if (size <= i)
		return (size + ft_strlen(src));
	while (src[j] && i + j < (size - 1))
	{
		dst[i + j] = src[j];
		j ++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*int main(void)
{
    char destination[20] = "Hello, ";
    const char source1[] = "world";
    const char source2[] = "1234567890";

    size_t copied1 = ft_strlcat(destination, source1, sizeof(destination));
    printf("Copied %zu characters:\n", copied1);
    printf("Destination: %s\n", destination);

    size_t copied2 = ft_strlcat(destination, source2, sizeof(destination));
    printf("Copied %zu characters:\n", copied2);
    printf("Destination: %s\n", destination);

    return 0;
}*/
