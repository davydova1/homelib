/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:52:05 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/07 19:52:10 by llemmiwi         ###   ########.fr       */
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
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (words);
}

static int		free_words(char **w, int i, int word_size)
{
	int			k;

	k = 0;
	w[i] = (char*)malloc(sizeof(char*) * (word_size + 1));
	if (!(w[i]))
	{
		while (k < i)
			free(w[k]);
		return (-1);
	}
	return (0);
}

static int		allocate_words(char **w, char const *s, char c)
{
	int			word_size;
	int			i;
	int			j;

	j = 0;
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
			if (free_words(w, j, word_size) == -1)
				return (-1);
			j++;
		}
	}
	return (0);
}

static void		fill(char **s, char const *str, char c)
{
	int			i;
	int			k;
	int			j;
	int			size;

	i = 0;
	k = 0;
	size = count_words(str, c);
	while (str[i] && k < size)
	{
		while (str[i] == c)
			i++;
		j = 0;
		while (str[i] != c && str[i])
			s[k][j++] = str[i++];
		s[k][j] = '\0';
		k++;
	}
	s[k] = NULL;
}

char			**ft_split(char const *s, char c)
{
	char		**words;
	int			size;
	int			fl;

	if (c == '\0' || !s)
		return (NULL);
	size = count_words(s, c);
	words = (char**)malloc(sizeof(char*) * (size + 1));
	if (!words)
		return (NULL);
	if ((fl = allocate_words(words, s, c)) == -1)
	{
		free(words);
		return (NULL);
	}
	fill(words, s, c);
	return (words);
}
