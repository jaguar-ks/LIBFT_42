#include "libft.h"
int	ft_atoi(const char *str)
{
	int i=0;
	int s;
	int r=0;
	while(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	s=(str[i]=='-') ? -1 : 1;
	if(s < 0 || str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		r = (r*10)+((int)str[i]-48);
		i++;
	}
	return(r*s);
}

