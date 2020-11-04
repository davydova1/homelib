/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemmiwi <llemmiwi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:06:42 by llemmiwi          #+#    #+#             */
/*   Updated: 2020/11/04 16:06:42 by llemmiwi         ###   ########.fr       */
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
static int flag(const char *s, char c)
{
	int i;
	
	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return 1;
		i++;
	}
	return (0);
}
static char	*ft_strcpy_trim(const char *src, int start, int end)
{
	int		i;
	char	*str;
	
	i = 0;
	if (start > end)
			str = (char*)malloc(sizeof(*src) * 1);
	else
	{
		str = (char*)malloc(sizeof(*src) * (end-start+2));
		if (!(str))
			return (NULL);
		while (start <= end)
		{
			str[i] = src[start];
			start++;
			i++;
		}
	}
	str[i] = '\0'; 
	return (str);
}
char *ft_strtrim(char const *s1, char const *set)
{
	int start;
	int end;
	char *dst;
	
	if (!s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1)-1;
	while((s1[start] == ' ') || (s1[start] == '\n') || (s1[start] == '\t') || flag(set,s1[start]))
		start++;
	while((s1[end] == ' ') || (s1[end] == '\n') || (s1[end] == '\t')|| flag(set,s1[end]))
		end--;
	//printf("%d %d\n", start, end);
	dst = ft_strcpy_trim(s1, start, end);
	return (dst);
}

int main(void) {
	const char src1[11] = "abcabc";
	const char src2[6] = "abc";
	char *dst;
	
	dst = ft_strtrim(src1,src2);
	int i = 0;
	
	printf("Исходники: ");
	while (src1[i])
		printf("%c", src1[i++]);
	i = 0;
	printf(" ");
	while (src2[i])
		printf("%c", src2[i++]);
	i = 0;
	printf(" Результат: ");
	while (dst[i])
		printf("%c", dst[i++]);
	
	
	const char src3[15]= "abcpsdabc1";
	const char src4[6] = "abc1";
	char *dst2;
	
	printf("\nИсходники: ");
	i = 0;
	while (src3[i])
		printf("%c", src3[i++]);
	i = 0;
	printf(" ");
	while (src4[i])
		printf("%c", src4[i++]);
	printf(" Результат: "); 
	dst2 = ft_strtrim(src3,src4);
	i = 0;
	while (dst2[i])
		printf("%c", dst2[i++]);
		
		
	const char src5[20] = "abcpsdmjdfa";
	const char src6[6] = "abc";
	char *dst3;

	printf("\nИсходники: ");
	i = 0;
	while (src5[i])
		printf("%c", src5[i++]);
	i = 0;
	printf(" ");
	while (src6[i])
		printf("%c", src6[i++]);
	printf(" Результат: ");
	dst3 = ft_strtrim(src5,src6);
	i = 0;
	while (dst3[i])
		printf("%c", dst3[i++]);
		
		
	const char src7[25] = "acpsdmjdfa";
	const char src8[6] = "m";
	char *dst4;
		
	printf("\nИсходники: ");
	i = 0;
	while (src7[i])
		printf("%c", src7[i++]);
	i = 0;
	printf(" ");
	while (src8[i])
		printf("%c", src8[i++]);
	i = 0;
	printf(" Результат: ");
	dst4 = ft_strtrim(src7,src8);
	i = 0;
	while (dst4[i])
		printf("%c", dst4[i++]); 
	return 0;
}
