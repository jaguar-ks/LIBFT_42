#include"libft.h"
int ft_strlcpy(char d,char s)
{
	int i=-1;
	while(s[++i])
		d[i] = s[i];
	d[i] = '\0';
	return i;
}
