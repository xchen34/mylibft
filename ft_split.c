/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 20:42:10 by leochen           #+#    #+#             */
/*   Updated: 2023/11/20 00:11:13 by czha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"libft.h"

static char	**malloc_fail(char **split, int word)
{
	while (word > 0)
		free(split[word--]);
	free(split);
	return (NULL);
}

static int	count_words(char *s, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*s)
	{
		if (*s == c && flag == 1)
			flag = 0;
		else if (*s != c && flag == 0)
		{
			count++;
			flag = 1;
		}	
		s++;
	}
	return (count);
}


char	*write_word(char *s, size_t start, size_t end)
{
	char	*word;

	word = (char *)malloc(sizeof(char) * (end - start + 2));
	if (word == NULL)
		return (NULL);
	if (start <= end)
		ft_memcpy(word, s + start, end - start + 1);
	word[end - start + 1] = '\0';
	return (word);
}

char **ft_split(char *s, char c)
{
	size_t	i;
	size_t	j;
	int	index;
	char	**split;

	if (!(split = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1))) || !s )
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (s[i])
	{
		if (s[i] != c && index < 0)
			index = i;
		else if (s[i] == c && index >= 0)
		{
			split[j] = write_word(s, index, i - 1);
			if (!split[j])
				return (malloc_fail(split, j + 1);
			index = -1;
			j ++;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
	
