/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:16:06 by faksouss          #+#    #+#             */
/*   Updated: 2022/10/07 23:24:00 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	kayn(char *s, char c)
{
	int	i;

	i = -1;
	while (s[++i])
		if (s[i] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	t;
	char			*r;

	i = 0;
	j = ft_strlen(s1) - 1;
	t = 0;
	while (s1[i] && kayn((char *)set, s1[i]))
		i++;
	while (s1[j] && kayn((char *)set, s1[j]))
		j--;
	r = (char *)malloc(j - i + 1);
	while (i <= j)
		r[t++] = s1[i++];
	r[t] = 0;
	return (r);
}
