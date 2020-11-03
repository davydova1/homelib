/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 01:52:51 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/04 01:52:51 by llemmiwi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>
size_t ft_strlen (const char *str)
{
	size_t size;
	unsigned char *str1;
	
	size = 0;
	str1 = (unsigned char *)str;
	
	while (*str1++)
		size++;

	return size;
}

static int begin_enter(char const *s1, char const *set, int k)
{
	int j;
	int t;

	j = 0;
	t = k;
	while (s1[k] == set[j])
	{
		if (set[j+1] == '\0')
			return (k);
		k++;
		j++;
	}
	return (t);
}
static int end_enter(char const *s1, char const *set, int k)
{
	size_t j;
	int t;

	t = k;
	j = (ft_strlen(set)-1);
	while (s1[k] == set[j] && j != -1)
	{
		k--;
		j--;
	}
	if (j == -1)
		return (k);
	return (t);
}
static char	*ft_strcpy_trim(const char *src, int start, int end)
{
	int		i;
	char	*str;
	
	i = 0;
	start+=1;
	str = (char*)malloc(sizeof(*src) * (end-start+2));
	printf("start - %d\n",start);
	printf("end - %d\n", end);
	printf("размер новой строки - %d\n", (end-start+1));
	if (!(str))
		return (NULL);
	while (start <= end)
	{
		printf("copying %c\n", src[start]);
		str[i] = src[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
char *ft_strtrim(char const *s1, char const *set)
{
	int start;
	int end;
	char *dst;
	
	start = 0;
	end = ft_strlen(s1)-1;
	while((s1[start] == ' ') || (s1[start] == '\n') || (s1[start] == '\t'))
		start++;
	while((s1[end] == ' ') || (s1[end] == '\n') || (s1[end] == '\t'))
		end--;
	start = begin_enter(s1, set, start);
	end = end_enter(s1, set, end);
	dst = ft_strcpy_trim(s1, start, end);
	return (dst);
}

int main(void) {
	const char src1[11] = "abcabc";
	const char src2[6] = "abc";
	char *dst;
	
	dst = ft_strtrim(src1,src2);
	int i = 0;
	while (dst[i])
		printf("%c", dst[i++]);
	return 0;
}
