/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deman_wolf <deman_wolf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 12:15:21 by deman_wolf        #+#    #+#             */
/*   Updated: 2022/08/06 12:28:58 by deman_wolf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
//#include"libft.h"
char	*ft_strchr(char *s, int c)
{
	unsigned int i=0;
	while(s[i])
	{
		if(s[i] == c)
			return (s+i);
		else
			i++;
	}
	return NULL;
}
/*int main()
{
	printf("%s", ft_strchr("fAhdAmine" , -65));
}*/