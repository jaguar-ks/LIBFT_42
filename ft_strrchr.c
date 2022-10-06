/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deman_wolf <deman_wolf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 12:33:56 by deman_wolf        #+#    #+#             */
/*   Updated: 2022/10/06 06:28:17 by deman_wolf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(char *s, int ch)
{
	int i=-1;
	while(s[++i]);
	while(s[--i])
	{
		if(s[i] == ch)
			return(s+i);
	}
	return NULL;
}
/*int main()
{
	printf("%s", ft_strrchr("fahdamineksouss",'s'));
}*/