/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:31:46 by leochen           #+#    #+#             */
/*   Updated: 2023/11/16 18:40:49 by leochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
//#include <stddef.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	new_len;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		sub = ft_calloc(1, sizeof(char));
		if (!sub)
			return (NULL);
	}
	else
	{
		new_len = ft_strlen(s + start);
		if (!(new_len < len))
			new_len = len;
		sub = (char *)malloc((new_len + 1) * sizeof(char));
		if (!sub)
			return (NULL);
		sub[new_len] = 0;
		while (new_len-- > 0)
			sub[new_len] = s[start + new_len];
	}
	return (sub);
}

/*char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	sub = (char *)malloc(len + 1);
	if (sub == NULL || start >= ft_strlen(s))
		return (NULL);
	while (i < len && s[start])
	{
		sub[i] = s[start];
		i ++;
		start ++;
	}
	sub[i] = '\0';
	return (sub);
}*/

/*int main(void) {
    // 测试正常情况
    char str[] = "Hello, World!";
    char *result = ft_substr(str, 7, 5);
    printf("Test 1: Result: %s\n", result);
    free(result);

    // 测试超出字符串长度
    result = ft_substr(str, 15, 5);
    printf("Test 2: Result: %s\n", result);
    free(result);

    // 测试空字符串
    result = ft_substr("", 0, 3);
    printf("Test 3: Result: %s\n", result);
    free(result);

    // 测试从字符串中间开始
    result = ft_substr(str, 6, 7);
    printf("Test 4: Result: %s\n", result);
    free(result);

    // 测试空字符串和超出范围
    result = ft_substr("", 2, 5);
    printf("Test 5: Result: %s\n", result);
    free(result);

    return 0;
}*/
