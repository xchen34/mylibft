/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:48:41 by leochen           #+#    #+#             */
/*   Updated: 2023/11/08 15:21:37 by leochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<string.h>
#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;

	if (dest == NULL || src == NULL)
		return (NULL);
	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *) src;
	if (p_dest > (p_src + n) || p_src > (p_dest + n))
	{
		while (n > 0)
		{
			*p_dest = *p_src;
			p_dest ++;
			p_src ++;
			n --;
		}
	}
	return (dest);
}

/*int	main() 
{
    char source[] = "Hello, World!";
    char destination[20];

    // 使用标准库的 memcpy 复制数据
    memcpy(destination, source, strlen(source) + 1);

    // 打印目标字符串
    printf("Copied string: %s\n", destination);

    return 0;
}*/
