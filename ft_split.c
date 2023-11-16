/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leochen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:49:20 by leochen           #+#    #+#             */
/*   Updated: 2023/11/16 19:11:05 by leochen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static int	split_words(char **result, char const *s, char c, int word)
{
	int		start_cur;
	int		end_cur;

	end_cur = 0;
	start_cur = 0;
	while (s[end_cur])
	{
		if (s[end_cur] == c || s[end_cur] == 0)
			start_cur = end_cur + 1;
		if (s[end_cur] != c && (s[end_cur + 1] == c || s[end_cur + 1] == 0))
		{
			result[word] = malloc(sizeof(char) * (end_cur - start_cur + 2));
			if (!result[word])
			{
				while (word++)
					free(result[word]);
				return (0);
			}
			ft_strlcpy(result[word], (s + start_cur), end_cur - start_cur + 2);
			word++;
		}
		end_cur++;
	}
	result[word] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	if (!split_words(result, s, c, 0))
		return (NULL);
	return (result);
}
/*static int	count_word(char const *s, char c)
{
	int	count;
	int	trigger;

	count = 0;
	trigger = 0;
	while (*s)
	{
		if (*s == c)
			trigger = 0;
		else if (*s != c && trigger == 0)
			count++;
		s++;
	}
	return (count);
}

static char	*write_word(char const *s, size_t start, size_t end)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc(sizeof(char) * (end - start + 2));
	if (word == NULL)
		return (NULL);
	while (*s && start <= end)
	{
		word[i] = s[start];
		start++;
		i++;
	}	
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	j;
	int		index;

	split = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (split == NULL || s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (i < ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s) - 1) && index >= 0)
		{
			split[j++] = write_word(s, index, (i - 1));
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}*/

/*int main(void)
{
    char const *s = ",,,This,is,a, ,test,,,string,,,,";
    char c = ',';

    char **result = ft_split(s, c);

    if (result)
    {
        // Print each string in the array
        for (int i = 0; result[i] != NULL; i++)
        {
            printf("String %d: %s\n", i + 1, result[i]);
            free(result[i]); // Don't forget to free each string
        }

        free(result); // Don't forget to free the array itself
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/
