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

char *ft_strjoin(char const *s1, char const *s2)
{
	unsigned int i;
	size_t size_s1;
	size_t size_s2;
	char *dst;
	
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	if (!(dst = (char*)malloc(sizeof(*s1)*(size_s1+size_s2+1))))
		return (NULL);
	while (*s1)
		{
			dst[i++] = *s1++;
			//i++;
		}
	while (*s2)
		{
			dst[i++] = *s2++;
			//i++;
		}
	dst[i] = '\0';
	return (dst);
}
int main(void) {
	const char src1[6] = "hello";
	const char src2[6] = "ppppp";
	char *dst;
	
	dst = ft_strjoin(src1,src2);
	int i = 0;
	while (dst[i])
		printf("%c", dst[i++]);
	return 0;
}
