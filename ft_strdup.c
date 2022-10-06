/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deman_wolf <deman_wolf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 06:24:47 by deman_wolf        #+#    #+#             */
/*   Updated: 2022/10/06 06:25:00 by deman_wolf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"libft.h"

char	*ft_strcpy(char *d, char *s)
{
	int i = -1;
	while(s[++i])
		d[i] = s[i];
	d[i] = 0;
	return d;
}

char	*ft_strdup(const char *s)
{
	int i=-1;
	char *d;
	while(s[++i]);
	d = (char *)malloc(sizeof(char) * (i+1));
	if (d == NULL)
		return NULL;
	i=-1;
	ft_strcpy(d, (char *)s);
	d[i] = '\0';
	return d;
}
