#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i=0;
	while(s1[i] && s1[i] == s2[i] && i < n-1)
		i++;
	return (s1[i] - s2[i]);
}
/*int main()
{
	char s1[] = "fahd";
	char s2[] = "fahd";
	printf("%d", ft_strncmp(s1,s2,5));
}*/