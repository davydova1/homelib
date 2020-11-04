/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 01:53:04 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/04 22:49:27 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char const *s, char c)
{
	int			words;
	int			i;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && i == 0)
			words++;
		if (s[i - 1] == c && i > 0 && s[i + 1])
			words++;
		while (s[i] != c && s[i])
			i++;
	}
	return (words);
}

static void		allocate_words(char **w, char const *s, char c)
{
	int			word_size;
	int			i;
	int			j;

	j = 0;
	word_size = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		word_size = 0;
		while (s[i] != c && s[i])
		{
			word_size++;
			i++;
		}
		if (word_size != 0)
		{
			printf("размер слова - %d\n", word_size);
			w[j] = (char*)malloc(sizeof(*s) * (word_size + 1));
			j++;
		}
	}
}

static void		fill(char **s, char const *str, char c)
{
	int			i;
	int			k;
	int			j;

	i = 0;
	k = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		j = 0;
		while (str[i] != c && str[i])
			s[k][j++] = str[i++];
		k++;
	}
	s[k] = NULL;
}

char			**ft_split(char const *s, char c)
{
	char		**words;
	int			size;

	if (c == '\0')
		return (NULL);
	size = count_words(s, c);
	words = (char**)malloc(sizeof(char*) * (size + 1));
	if (!words)
		return (NULL);
	allocate_words(words, s, c);
	fill(words, s, c);
	return (words);
}
