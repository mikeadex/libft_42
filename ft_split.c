/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madeleye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:11:49 by madeleye          #+#    #+#             */
/*   Updated: 2023/12/05 19:07:05 by madeleye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_word_dup(const char *s, size_t len)
{
	char	*word;
	size_t	i;

	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static void	create_substrings(char **split, char const *s, char c)
{
	const char	*word_start;
	int			word_index;

	word_index = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		word_start = s;
		while (*s && *s != c)
			s++;
		if (s > word_start)
		{
			split[word_index] = ft_word_dup(word_start, s - word_start);
			if (!split[word_index])
			{
				while (word_index--)
					free(split[word_index]);
				free(split);
			}
			word_index++;
		}
	}
	split[word_index] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**split;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	create_substrings(split, s, c);
	return (split);
}
