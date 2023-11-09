/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:23:43 by leochen           #+#    #+#             */
/*   Updated: 2023/11/09 18:13:21 by leochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*b;
	
	b = (char *)big;
	i = 0;
	j = 0;
	if (*little == '\0')
		return (b);
	while (*b && i < len)
	{
		while (*little && )
		{
			if (b[i] != little[j])
				i ++;
			else
			{
				j ++;
				i = 0;
			}
		}
		return (&(b[i]) - ft_strlen(little));	
	}
	return (NULL);
}


int	main()
{
	char lit[] = "const";
	char big[] = "iloconstance";
	
	printf("%p\n", ft_strnstr(big, lit, 5));
//	printf("%p\n", strnstr(big, lit, 5));

	return 0;

}


