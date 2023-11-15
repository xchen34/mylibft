/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:38:47 by leochen           #+#    #+#             */
/*   Updated: 2023/11/13 16:47:58 by leochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	start;
	size_t	end;
	size_t	i;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	i = 0;
	while (*s1 && ft_strchr(set, s1[i]) != NULL)
		i ++;
	start = i;
	i = 0;
	while (*s1 && ft_strchr(set, s1[ft_strlen(s1) - 1 - i]) != NULL)
		i ++;
	end = ft_strlen(s1) - i;
	s2 = (char *)malloc(end - start + 2);
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, s1 + start, end - start + 1);
	return (s2);
}

/*char	*ft_strtrim(char const *s1, char const *set)
{
    char	*trimmed;
    size_t	start;
    size_t	end;
    size_t	i;

    if (!s1)
        return (NULL);
	if (!set)
		return (ft_strdup(s1));
    start = 0;
    while (s1[start] && strchr(set, s1[start]))
        start++;    //找出第一个不出现在set里面的字符
    end = strlen(s1);
    while (end > start && strchr(set, s1[end - 1]))
        end--;   //找出最后一个不出现在set里面的字符
    trimmed = (char *)malloc(sizeof(char) * (end - start + 2));
    if (!trimmed)
        return (NULL);
    i = 0;
    while (start < end)
        trimmed[i++] = s1[start++];
    trimmed[i] = '\0';
    return (trimmed);
}


int main(void)
{
    char s1[] = "cobbconscccon";
    char set[] = "cons";
    char *result = ft_strtrim(s1, set);

    if (result)
    {
        printf("Trimmed String: \"%s\"\n", result);
        free(result);  // Don't forget to free the allocated memory
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}  //在s1的开头和结尾删除出现在set里面的字符保留中间的字符  */
