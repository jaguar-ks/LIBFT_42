/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 01:22:35 by faksouss          #+#    #+#             */
/*   Updated: 2022/10/09 14:21:54 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	is_c(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

int	h_m_str(char *s, char c)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (s[++i])
	{
		while (s[i] && is_c(s[i], c))
			i++;
		if (s[i] && !is_c(s[i], c))
		{
			j++;
			while (s[i] && !is_c(s[i], c))
				i++;
		}
	}
	return (j - 1);
}

int	h_m_ch(char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] && is_c(s[i], c))
		i++;
	while (s[i] && !is_c(s[i], c))
	{
		i++;
		j++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		st;
	char	**r;

	i = -1;
	st = 0;
	r = (char **)malloc(sizeof(char *) * h_m_str((char *)s, c) + 1);
	if (!r)
		return (NULL);
	while (++i < h_m_str((char *)s, c))
	{
		while (s[st] && is_c(s[st], c))
			st++;
		r[i] = ft_substr(s, st, h_m_ch((char *)s + st, c));
		st += h_m_ch((char *)s + st, c);
	}
	r[i] = NULL;
	return (r);
}
